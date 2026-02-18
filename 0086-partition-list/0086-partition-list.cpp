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
        if(head==nullptr || head->next==nullptr) return head;
       ListNode dummy(0);
       dummy.next=head;
       ListNode * temp=head;
       int n=1;
       while(temp->next!=nullptr){
        temp=temp->next;
        n++;
       }
       ListNode * fast=&dummy;
       ListNode * last=temp;

       while(fast->next->next!=nullptr && n>0){
           if(fast->next->val>=x){
            ListNode * tolast=fast->next;
            fast->next=fast->next->next;
            last->next=tolast;
            tolast->next=nullptr;
            last=tolast;
            
           }
           else{
            fast=fast->next;
           }
           n--;
       }
       return dummy.next;
       
    }
};