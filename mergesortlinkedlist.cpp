#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *merge(Node *head1, Node *head2){
    
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    Node *finalhead;
    Node *tail;
    
    if(head1->data <= head2 ->data){
        finalhead = head1;
        tail = head1;
        head1=head1->next;
    }
    else{
        finalhead= head2;
        tail = head2;
        head2=head2->next;
    }
    
    while(head1!=NULL && head2!=NULL){
        if(head1->data < head2->data){
            tail->next = head1;
            tail=head1;
            head1=head1->next;
            
        }
        else{
            tail->next = head2;
            tail=head2;
            head2=head2->next;
            
        }
    }
     if(head1==NULL)
    {
        tail->next = head2 ;
    }
    else
    {
       tail->next = head1 ; 
    }
    
    return finalhead;
    
}
Node *mergeSort(Node *head)
{

    if(head== NULL || head->next==NULL){
        return head;
    }
    
    Node *slow = head;
    Node *fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    Node *smallhead = slow->next;
    slow->next = NULL;
    
    head = mergeSort(head);
    smallhead = mergeSort(smallhead);
    
    Node *final_head = merge(head, smallhead);
    
    return final_head;
    
}

Node * takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data <<" ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node *head = takeinput();
	head = mergeSort(head);
	print(head);

	return 0;
}