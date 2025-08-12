//PROBLEM STATEMENT - Detect a loop in LL
//PROBLEM - https://leetcode.com/problems/linked-list-cycle/description/
//SOLUTION:-
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
