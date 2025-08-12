//PROBLEM STATEMENT - Middle of a LinkedList [TortoiseHare Method]
//PROBLEM - https://leetcode.com/problems/middle-of-the-linked-list/description/
//SOLUTION:-
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;    
    }
};
