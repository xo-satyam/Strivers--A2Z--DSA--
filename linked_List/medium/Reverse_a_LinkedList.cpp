//PROBLEM STATEMENT - Reverse a LinkedList
//PROBLEM - https://leetcode.com/problems/reverse-linked-list/description/
//SOLUTION:-
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newhead;
    }
};
