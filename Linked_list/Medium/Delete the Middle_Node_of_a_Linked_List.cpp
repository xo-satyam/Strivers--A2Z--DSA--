//PROBLEM STATEMENT : Delete the Middle Node of a Linked List
//PROBLEM : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
//SOLUTION :-
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        slow->next = NULL;
        delete (slow);
        return head;
    }
};
