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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp=head;
        int n=0;
        while(temp!=nullptr){
          temp=temp->next;
          n++;
        }
        ListNode * newHead=nullptr;
        ListNode * part=nullptr;
        temp=head;
        while(n>=k){
           int curr=0;
           ListNode * prev=nullptr;
           ListNode * next;
           ListNode * ni=temp;
           while(temp!=nullptr && curr<k){
              next=temp->next;
              temp->next=prev;
              prev=temp;
              temp=next;
              curr++;
           }
           n-=k;
           if(newHead==nullptr) newHead=prev;
           if(part!=nullptr) part->next=prev;
           part=ni;

             
        }
        if(part!=nullptr) part->next=temp;
        return newHead;
    }
};