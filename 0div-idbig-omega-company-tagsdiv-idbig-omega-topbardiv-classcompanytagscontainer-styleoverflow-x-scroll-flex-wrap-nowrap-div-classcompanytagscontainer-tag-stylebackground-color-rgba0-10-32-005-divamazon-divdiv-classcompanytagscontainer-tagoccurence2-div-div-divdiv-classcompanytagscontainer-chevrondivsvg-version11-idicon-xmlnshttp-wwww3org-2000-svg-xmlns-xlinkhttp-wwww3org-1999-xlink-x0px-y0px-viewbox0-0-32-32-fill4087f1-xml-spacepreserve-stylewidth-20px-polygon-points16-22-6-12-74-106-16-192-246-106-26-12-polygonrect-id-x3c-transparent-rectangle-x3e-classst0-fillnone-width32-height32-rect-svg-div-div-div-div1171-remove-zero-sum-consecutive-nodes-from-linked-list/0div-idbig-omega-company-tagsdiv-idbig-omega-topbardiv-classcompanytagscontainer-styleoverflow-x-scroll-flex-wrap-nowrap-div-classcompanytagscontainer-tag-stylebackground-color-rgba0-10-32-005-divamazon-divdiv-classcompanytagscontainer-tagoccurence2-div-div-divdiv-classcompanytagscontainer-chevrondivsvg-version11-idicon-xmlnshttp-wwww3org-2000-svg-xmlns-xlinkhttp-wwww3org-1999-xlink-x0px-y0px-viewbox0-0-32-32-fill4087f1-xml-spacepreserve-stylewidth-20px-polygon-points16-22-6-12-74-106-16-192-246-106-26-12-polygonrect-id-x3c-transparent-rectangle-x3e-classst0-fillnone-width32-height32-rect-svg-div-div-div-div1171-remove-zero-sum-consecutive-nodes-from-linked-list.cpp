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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*temp=new ListNode(0);
        unordered_map<int,ListNode*>mp;
        temp->next=head;
        int sum=0;
        for(ListNode* i=temp;i!=NULL;i=i->next){
            mp[sum+=i->val]=i;
        }
        sum=0;
        for(ListNode* i=temp;i!=NULL;i=i->next){
            i->next=mp[sum+=i->val]->next;
        }
    return temp->next;
    }
};