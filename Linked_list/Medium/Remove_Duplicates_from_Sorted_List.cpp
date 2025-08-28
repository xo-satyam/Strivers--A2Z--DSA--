//PROBLEM STATEMENT - Given the head of a sorted linked list, delete all duplicates such that each element appears 
//                    only once. Return the linked list sorted as well.
//PROBLEM - https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
//SOLUTION :-
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL) return head;
        while(temp != NULL && temp->next != NULL){
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
