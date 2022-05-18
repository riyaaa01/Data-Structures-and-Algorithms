#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


Node* segregate(Node *head) {
        
        // Add code here
       int ZeroCnt = 0;
       int OneCnt = 0;
       int TwoCnt = 0;
       
       Node* temp = head;
       while(temp != NULL){
           if(temp -> data == 0)
           ZeroCnt++;
           
           else if(temp -> data == 1)
           OneCnt++;
           
           else if(temp -> data == 2)
           TwoCnt++;
           
           temp = temp -> next;
       }
       
       temp = head;
       
       while(temp != NULL) {
           if(ZeroCnt != 0){
           temp -> data = 0;
           ZeroCnt--;
           }
           
           else if( OneCnt != 0){
           temp -> data = 1;
           OneCnt--;
           }
           
           else if(TwoCnt != 0){
           temp -> data = 2;
           TwoCnt--;
           }
           temp  = temp -> next;
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

void print(Node *head){
    Node *temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    Node *head = takeinput();
	Node *ans = segregate(head);
    print(ans);
    return 0;
}