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
        ListNode* current=new ListNode();
        ListNode* NewHead=current;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
                current->next=new ListNode(temp->val);
                current=current->next;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->val>=x){
                current->next=new ListNode(temp->val);
                current=current->next;
            }
            temp=temp->next;
        }
        return NewHead->next;
    }
}; 