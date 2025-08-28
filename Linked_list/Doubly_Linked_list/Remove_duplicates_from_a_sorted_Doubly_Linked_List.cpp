//PROBLEM STATEMENT - Remove duplicates from a sorted Doubly Linked List
//PROBLEM - https://www.naukri.com/code360/problems/unique-sorted-list_2420283
//SOLUTION :-
Node * removeDuplicates(Node *head)
{
    Node* temp = head;
    while(temp != NULL){
        Node* nextnode = temp->next;
        while(nextnode != NULL && nextnode->data == temp->data){
            nextnode = nextnode->next;
        }
        temp->next = nextnode;
        if(nextnode) nextnode->prev = temp;
        temp =temp->next;
    }
    return head;
}
