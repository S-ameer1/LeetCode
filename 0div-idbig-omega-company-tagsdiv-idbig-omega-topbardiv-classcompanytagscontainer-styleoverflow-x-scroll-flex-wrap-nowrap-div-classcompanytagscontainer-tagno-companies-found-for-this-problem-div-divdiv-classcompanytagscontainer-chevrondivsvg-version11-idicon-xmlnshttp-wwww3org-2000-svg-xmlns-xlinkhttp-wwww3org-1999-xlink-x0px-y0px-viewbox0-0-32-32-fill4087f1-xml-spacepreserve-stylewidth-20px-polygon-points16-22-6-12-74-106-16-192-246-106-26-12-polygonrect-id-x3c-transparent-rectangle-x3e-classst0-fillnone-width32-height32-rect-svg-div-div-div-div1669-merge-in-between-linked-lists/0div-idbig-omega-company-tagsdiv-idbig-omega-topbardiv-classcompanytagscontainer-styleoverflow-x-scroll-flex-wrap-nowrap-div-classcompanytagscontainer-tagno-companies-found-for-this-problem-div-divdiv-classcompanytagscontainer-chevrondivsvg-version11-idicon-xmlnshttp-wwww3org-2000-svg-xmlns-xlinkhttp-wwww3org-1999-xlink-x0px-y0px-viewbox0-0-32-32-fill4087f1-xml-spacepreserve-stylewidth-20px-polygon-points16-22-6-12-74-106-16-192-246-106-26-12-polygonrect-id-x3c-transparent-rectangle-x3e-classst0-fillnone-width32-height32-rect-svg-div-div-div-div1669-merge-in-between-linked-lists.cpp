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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first;
        ListNode* second;
        ListNode* temp=list1;
        int count=0;
        while(temp->next!=NULL){
            if(count==a-1){
                first=temp;
            }
            if(count==b){
                second=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
            count++;
        }
        ListNode*temp2=list2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        first->next=list2;
        temp2->next=second;
        return list1;

    }
};