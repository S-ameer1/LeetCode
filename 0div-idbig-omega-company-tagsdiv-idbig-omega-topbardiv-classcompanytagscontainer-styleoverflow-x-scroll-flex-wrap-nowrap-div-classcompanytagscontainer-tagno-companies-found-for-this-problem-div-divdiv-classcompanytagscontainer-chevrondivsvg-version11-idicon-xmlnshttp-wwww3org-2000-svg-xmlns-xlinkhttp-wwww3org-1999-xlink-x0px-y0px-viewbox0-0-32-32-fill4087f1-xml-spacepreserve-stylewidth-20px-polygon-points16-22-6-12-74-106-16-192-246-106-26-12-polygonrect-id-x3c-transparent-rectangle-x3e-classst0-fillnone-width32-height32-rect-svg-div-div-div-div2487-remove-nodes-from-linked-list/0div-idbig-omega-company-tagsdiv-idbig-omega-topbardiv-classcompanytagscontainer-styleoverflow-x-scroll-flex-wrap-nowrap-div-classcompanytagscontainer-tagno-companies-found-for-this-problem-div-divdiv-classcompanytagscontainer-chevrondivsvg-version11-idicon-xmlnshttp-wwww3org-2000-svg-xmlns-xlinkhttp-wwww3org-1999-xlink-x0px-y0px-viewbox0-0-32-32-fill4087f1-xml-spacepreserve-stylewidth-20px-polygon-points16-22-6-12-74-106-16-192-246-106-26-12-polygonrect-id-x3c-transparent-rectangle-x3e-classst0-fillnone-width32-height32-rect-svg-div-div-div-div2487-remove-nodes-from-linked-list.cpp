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
    ListNode* help(ListNode* head){
        if(head!=NULL && head->next!=NULL){
            ListNode* newHead = removeNodes(head->next);
            if(newHead->val > head->val){
                return newHead;
            }
            head->next = newHead;
        }
        return head; 
    }
    ListNode* removeNodes(ListNode* head) {
       return help(head);

    }
};