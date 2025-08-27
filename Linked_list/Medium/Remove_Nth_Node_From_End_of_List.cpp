//PROBLEM STATEMENT : Given the head of a linked list, remove the nth node from the end of the list and return its head.
//PROBLEM : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//SOLUTION :-
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        for(int i=0;i<n;i++ ){
            fast = fast->next;
        }
        if(fast == NULL) return head->next;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next; 
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};
