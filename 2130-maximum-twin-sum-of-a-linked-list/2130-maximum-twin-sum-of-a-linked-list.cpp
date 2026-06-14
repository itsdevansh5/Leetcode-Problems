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
    int pairSum(ListNode* head) {
        ListNode dummy(0);
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast->next && fast->next->next){
          slow=slow->next;
          fast=fast->next->next;
        }
        ListNode * head2=slow->next;
        slow->next=nullptr;
        ListNode * temp=head;
        ListNode * prev=nullptr;
        ListNode * next;
        while(head2!=nullptr){
          next=head2->next;
          head2->next=prev;
          prev=head2;
          head2=next;
        }
        int maxs=0;
    
        while(prev!=nullptr && temp!=nullptr){
maxs=max(maxs,temp->val+prev->val);
temp=temp->next;
prev=prev->next;
        }
        return maxs;
        
    }
};