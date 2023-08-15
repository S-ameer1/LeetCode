/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* partition(ListNode* head, int x) {
        vector<int>ans1;
        vector<int>ans2;
        ListNode* temp=head;

        while(temp!=NULL){
            if(temp->val<x){
            ans1.push_back(temp->val);
            }
            else{
                ans2.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode*temp1=head;
        for(int i=0;i<ans1.size();i++){
            temp1->val=ans1[i];
            temp1=temp1->next;

        }
        for(int i=0;i<ans2.size();i++){
            temp1->val=ans2[i];
            temp1=temp1->next;

        }
        return head;

        
        }
}; 