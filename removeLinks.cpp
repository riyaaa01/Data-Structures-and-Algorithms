#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

Node* removeElements(Node* head, int val) {
    if(head==NULL) return head;
        
    while(head!=NULL && head->val==val){
        head = head->next;
    }
    Node *temp = head;
    while(temp!=NULL && temp->next!=NULL){
            
        if(temp->next->val == val){
            temp ->next= temp->next->next;
        }
        else{
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

void print(Node *head){
    Node *temp  = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){

    Node *head = takeinput();
    int val; 
    cin>>val;
	Node *ans = removeElements(head,val);
    print(ans);
    return 0;
}