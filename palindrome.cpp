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


Node *reverse(Node* head){
        Node* curr= head;
        Node* prev = NULL;
        Node *fwd = NULL;
        
        while(curr!=NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    bool isPalindrome(Node* head) {
        
        if(head == NULL){
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    
    while(fast->next!=NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *secondhead= slow->next;
    slow->next = NULL;
    secondhead= reverse(secondhead);
    
    Node *first = head;
    Node *second = secondhead;
    bool ans = true;
    while(second!=NULL){
        if(first->data != second->data){
            ans = false;
            break;
        }
        first= first->next;
        second = second->next;
    }
    
    first = head;
    second = reverse(second);
    
    while(first->next!= NULL){
        first = first->next;
    }
    first->next = second;
    
    return ans;
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

int main(){

    Node *head = takeinput();
	bool ans = isPalindrome(head);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}