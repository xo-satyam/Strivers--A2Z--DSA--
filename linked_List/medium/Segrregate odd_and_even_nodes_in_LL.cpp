//PROBLEM STATEMENT - Segrregate odd and even nodes in LL
//PROBLEM - https://leetcode.com/problems/odd-even-linked-list/description/
//SOLUTION:-
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = head->next;
        
        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};
