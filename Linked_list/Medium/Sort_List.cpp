//PROBLEM STATEMENT : Given the head of a linked list, return the list after sorting it in ascending order.
//PROBLEM : https://leetcode.com/problems/sort-list/
//SOLUTION :-
class Solution {
public:
    ListNode* merge(ListNode* head1,ListNode* head2){
        if(head1 == NULL || head2 == NULL){
            return head1==NULL ? head2 : head1;
        }
        if(head1->val <= head2->val){
            head1->next = merge(head1->next,head2);
            return head1;
        }
        else{
            head2->next = merge(head1,head2->next);
            return head2;
        }
    }
    ListNode* findmiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* middle = findmiddle(head);
        ListNode* lefthead = head;
        ListNode* righthead = middle->next;
        middle->next = NULL;
        lefthead = sortList(lefthead);
        righthead = sortList(righthead);
        return merge(lefthead,righthead);
    }
};
