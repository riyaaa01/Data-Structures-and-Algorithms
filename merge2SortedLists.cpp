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
Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 ==NULL){
            return list1;
        }
        
        Node *fhead;
        Node *tail;
        
        if(list1->data <= list2->data){
            fhead = list1;
            tail = list1;
            list1 = list1->next;
        }
        else{
            fhead = list2;
            tail = list2;
            list2 = list2->next;
        }
        
        while(list1!=NULL && list2!=NULL){
            if(list1->data < list2->data){
                tail->next = list1;
                tail = list1;
                list1=list1->next;
            }
            else{
                tail->next = list2;
                tail = list2;
                list2=list2->next;
            }
        }
        
        if(list1==NULL){
            tail->next = list2;
        }
        if(list2==NULL){
            tail->next = list1;
        }
        
        return fhead;
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

    Node *list1 = takeinput();
    Node *list2 = takeinput();
	Node *fhead = mergeTwoLists(list1,list2);
    print(fhead);
    return 0;
}