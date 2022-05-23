    
Node *clone(Node* head){
    
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;
        
    Node* temp = head;
        
    while(temp!=NULL){
            
        Node* newNode = new Node(temp->data);
        if(cloneHead ==NULL){
           cloneHead= newNode;
           cloneTail = newNode;
        }
        else{
            cloneTail->next=newNode;
            cloneTail = newNode;
        }
        temp = temp->next;
    }
        
        //step 2- create a hashmap and store nodes
    unordered_map<Node*, Node*> mp;
        
    Node* old = head;
    Node* clone = cloneHead;
        
    while(old!=NULL){
        mp[old] = clone;
        clone = clone->next;
        old = old->next;
    }
        
    old = head;
    clone = cloneHead;
        
    while(old!=NULL){
        clone->arb = mp[old->arb];
        clone = clone->next;
        old = old->next;
    }
        
    return cloneHead;
}    
    