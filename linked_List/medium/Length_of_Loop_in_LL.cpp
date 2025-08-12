//PROBLEM STATEMENT - Length of Loop in LL
//PROBLEM - https://www.naukri.com/code360/problems/find-length-of-loop_8160455
//SOLUTION:-
int loopLen(Node* slow,Node* fast){
    fast = fast->next;
    int cnt = 1;
    while(slow != fast){
        fast = fast->next;
        cnt++;
    }
    return cnt;
}
int lengthOfLoop(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return loopLen(slow,fast);
    }
    return 0;
}
