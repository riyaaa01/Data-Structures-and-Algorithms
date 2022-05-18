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
Node* reverse(Node* head){ 
        Node* curr= head;
        Node* fwd = NULL;
        Node* prev = NULL;
        
        while(curr!=NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        
        return prev;
    }
    
    Node* addTwoNumbers2(Node* l1, Node* l2) {
        Node* head1 = reverse(l1);
        Node* head2 = reverse(l2);
        Node* dummy = new Node(0);
        Node* temp = dummy;
        int carry = 0;
        while(head1 !=NULL || head2 != NULL || carry != 0){
            int sum = 0;
            if(head1!=NULL){
                sum= sum+ head1->data;
                head1=head1->next;
            }
            if(head2!=NULL){
                sum = sum + head2->data;
                head2 = head2->next;
            }
            sum = sum + carry;
            carry = sum/10;
            Node* newNode = new Node(sum%10);
            temp ->next = newNode;
            temp = temp->next;
        }
        Node *ans = reverse(dummy->next);
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
	Node *fhead = addTwoNumbers2(list1,list2);
    print(fhead);
    return 0;
}