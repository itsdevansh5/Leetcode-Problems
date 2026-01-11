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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode * dummy=new ListNode();
        dummy->next=head;
        ListNode * slow=dummy;
        ListNode * fast=head;

        while(fast!=nullptr){
            if(fast->next!=nullptr && fast->val==fast->next->val){
                int dup=fast->val;

                while(fast!=nullptr && fast->val==dup){
                    fast=fast->next;
                }
                slow->next=fast;
            }
            else{
                slow=slow->next;
                fast=fast->next;
            }
        }
         return dummy->next;      
    }
};