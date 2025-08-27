//PROBLEM STATEMENT : Add one to a number represented as Linked List
//PROBLEM : https://www.naukri.com/code360/problems/add-one-to-linked-list_920557
//SOLUTION :-
int carryOver(Node* temp){
    if(temp == NULL){
        return 1;
    }
    int carry = carryOver(temp->next);
    temp->data += carry;
    if(temp->data < 10){
        return 0;
    }
    temp->data = 0;
    return 1;
}
Node *addOne(Node *head)
{
    int carry = carryOver(head);
    if(carry == 1){
        Node* newhead = new Node(1);
        newhead->next = head;
        return newhead;
    }
    return head;
}
