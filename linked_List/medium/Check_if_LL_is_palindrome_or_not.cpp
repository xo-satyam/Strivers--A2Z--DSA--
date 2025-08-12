//PROBLEM STATEMENT - Check if LL is palindrome or not
//PROBLEM - https://leetcode.com/problems/palindrome-linked-list/description/
//SOLUTION:-
class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newhead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newhead;
        while(second != NULL){
            if(first->val != second->val){
                reverseLL(newhead);
                return false;
            }
            second = second->next;
            first = first->next;
        }
        reverseLL(newhead);
        return true;
    }
};
