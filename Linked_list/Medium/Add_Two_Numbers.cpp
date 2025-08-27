//PROBLEM STATEMENT : You are given two non-empty linked lists representing two non-negative integers. The digits are stored 
// in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
//PROBLEM : https://leetcode.com/problems/add-two-numbers/description/
//SOLUTION :-
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        while(t1 != NULL || t2 != NULL){
            int sum = carry;
            if(t1) sum += t1->val;
            if(t2) sum += t2->val;
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newnode;
            curr = curr->next;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }
        if(carry != 0){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return dummy->next;
    }
};
