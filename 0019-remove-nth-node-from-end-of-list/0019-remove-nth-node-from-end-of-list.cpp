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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int size=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            size++;
        }
        if(size==1)
        return nullptr;
        n=size-n;
        temp=head;
        while(n!=1 && n>0){
            temp=temp->next;
            n--;
        }
        if(n==0)
        head=head->next;
        else
        temp->next=temp->next->next;
        return head;

        
        
    }
};