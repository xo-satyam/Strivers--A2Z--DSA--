//PROBLEM STATEMENT - Given the head of a linked list and an integer val, remove all the nodes of the linked 
//                    list that has Node.val == val, and return the new head.
//PROBLEM - https://leetcode.com/problems/remove-linked-list-elements/
//SOLUTION :-
class Solution {
public:
    ListNode* removeElements(ListNode* head, int k) {
        ListNode* ans = new ListNode(0,head);
        ListNode* temp = ans;
        while(temp != NULL){
            if(temp->next != NULL && temp->next->val == k){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
            
        }
        ListNode* result = ans->next;
        delete ans;
        return result;
    }
};
