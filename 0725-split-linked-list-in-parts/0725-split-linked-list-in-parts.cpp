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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,NULL);
       ListNode*temp=head;
       int n=0;
        while(temp!=NULL){
           n++;
           temp=temp->next;
        }
        int Partsize=n/k;
        int extra=n%k;
        int i=0;
        ListNode*temp1=head;
        while(temp1!=NULL){
            ans[i]=temp1;
            i++;
            ListNode*prev=NULL;
            if(extra>0){
                for(int i=0;i<=Partsize && temp1!=NULL;i++){
                    prev=temp1;
                    temp1=temp1->next;
                    
                }
                extra--;
            }
            else{
                for(int i=0;i<Partsize && temp1!=NULL;i++){
                    prev=temp1;
                    temp1=temp1->next;
                    
                }

            }
            if(prev!=NULL){
            prev->next=NULL;
            }
        }
        return ans;
        
    }
};