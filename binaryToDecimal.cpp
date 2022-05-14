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


int getDecimalValue(Node* head) {
        int num = head->val;
        while (head->next != NULL) {
            num = (num << 1) | head->next->val;
            head = head->next;    
        }
        return num;
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

	int ans = getDecimalValue(head);
    cout<<ans;
    return 0;
}