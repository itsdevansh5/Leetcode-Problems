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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr)
        return head;
        ListNode * temp=head;
        int n=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            n++;
        }
        ListNode * last=temp;
        temp=head;
        n=n/2;
        int i=1;
        while(i<=n){
            ListNode * rem=temp->next;
            temp->next=temp->next->next;
            last->next=rem;
            rem->next=nullptr;
            last=rem;
            i++;
            temp=temp->next;
        }
        return head;

        
    }
};