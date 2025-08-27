//PROBLEM STATEMENT : Sort linked list of 0s 1s 2s
//PROBLEM : https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937
//SOLUTION :-
Node* sortList(Node *head){
    if(head == NULL && head->next == NULL) return head;
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);
    Node* zero = zerohead;
    Node* one = onehead;
    Node* two = twohead;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = temp;
        }
        else{
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    zero->next = (onehead->next)?onehead->next:twohead->next;
    one->next = twohead->next;
    two->next = NULL;
    Node* newhead = zerohead->next;

    delete zerohead;
    delete twohead;
    delete onehead;

    return newhead;
}
