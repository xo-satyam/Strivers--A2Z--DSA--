//PROBLEM STATEMENT - Delete all occurrences of a given key in a doubly linked list
//PROBLEM - http://naukri.com/code360/problems/delete-all-occurrences-of-a-given-key-in-a-doubly-linked-list_8160461
//SOLUTION :-
Node * deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == k){
            if(temp == head){
                head = head->next;
            }
            Node* nextnode = temp->next;
            Node* prevnode = temp->prev;
            if(nextnode) nextnode->prev = prevnode; // ON HEAD
            if(prevnode) prevnode->next = nextnode; // ON TAIL
            delete temp;
            temp = nextnode;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
