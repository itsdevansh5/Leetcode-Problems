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
        int n=0;
        ListNode *temp=head;
        while(temp!=nullptr){
          temp=temp->next;
          n++;
        }
        int half=0;
        temp=head;
        while(half<((n/2)-1)){
          temp=temp->next;
          half++;
        }
        ListNode * head2=temp->next;
        temp->next=nullptr;
        ListNode * prev=nullptr;
        ListNode * nex=head2;
  
        while(head2!=nullptr){
          nex=head2->next;
          head2->next=prev;
          prev=head2;
          head2=nex;
        }
        int maxs=0;
        temp=head;
        while(temp!=nullptr && prev!=nullptr){
          maxs=max(maxs,temp->val+prev->val);
          temp=temp->next;
          prev=prev->next;
        }
        return maxs;
        
    }
};