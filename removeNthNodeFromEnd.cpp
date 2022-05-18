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

Node* removeNthFromEnd(Node* head, int n) {
        
    Node* first = head;
    Node* second = head;
    int i = 0; // calculating length of LL
    while (second) {
        i++;
        second = second->next;
    }
    int j= 0;
    if(i==n) return head->next;
    while (j < i- n -1) {
        first = first->next;
        j++;
    }
    first->next = first->next->next;
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
	Node *ans = removeNthFromEnd(head);
    print(ans);
    return 0;
}