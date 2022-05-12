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

Node* deleteDuplicates(Node* head) {
        
        Node *temp =head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->data == temp->next->data){
                temp->next= temp->next->next;
            }
        else
        {
            temp = temp->next;
        }
            
        }
        
        return head;
        
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
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main(){

    Node *head = takeinput();
	Node *fhead = deleteDuplicates(head);
    print(fhead);
    return 0;
}