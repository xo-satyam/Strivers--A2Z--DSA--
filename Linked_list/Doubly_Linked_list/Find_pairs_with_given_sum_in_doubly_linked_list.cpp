//PROBLEM STATEMENT - Find pairs with given sum in doubly linked list
//PROBLEM - https://www.naukri.com/code360/problems/find-pair-with-a-given-sum-in-a-doubly-linked-list_1164172
//SOLUTION :-
vector<pair<int, int>> findPairs(Node* head, int k)
{
    Node* temp = head;
    Node* temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    vector<pair<int, int>>ans;
    while(temp != temp2 && temp != temp2->next){
        
        int sum = temp->data + temp2->data;
        if(sum == k){
            pair<int,int>x = {temp->data,temp2->data};
            ans.push_back(x);
            temp = temp->next;
            temp2 = temp2->prev;
        }
        else if(sum > k){
            temp2 =  temp2->prev;
        }
        else{
            temp = temp->next;
        }
    }
    
    return ans;
}
