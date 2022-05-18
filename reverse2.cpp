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

Node *reverse(Node* head, int m, int n){
    Node *dummy = new Node(0), *pre = dummy, *cur;
    dummy -> next = head;
    for (int i = 0; i < m - 1; i++) {
       pre = pre -> next;
    }
       cur = pre -> next;
    for (int i = 0; i < n - m; i++) {
       Node* temp = pre -> next;
       pre -> next = cur -> next;
       cur -> next = cur -> next -> next;
       pre -> next -> next = temp;
   }
    return dummy -> next; 
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
    int left, right;
    cin>>left>>right;
	Node *ans = reverse(head, left, right);
    print(ans);
    return 0;
}