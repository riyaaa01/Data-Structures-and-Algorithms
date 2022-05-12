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

bool hasCycle(Node *head) {
        Node *fast = head;
        Node *slow = head;
        while(fast!=NULL && fast->next!=NULL){
            
            slow= slow->next;
            fast = fast->next->next;
            if(fast==slow) return true;  
        }
        
        return false;
        
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
	bool ans = hasCycle(head);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}