/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return nullptr;
        ListNode *a =head;
        ListNode *b =head;
        while(b!=nullptr && b->next!=nullptr){
            a=a->next;
            b=b->next->next;
            if(a==b)
            break;
        }
        if(a==b){
            a=head;
            while(a!=b){
                a=a->next;
                b=b->next;
            }
            return a;
        }
        return nullptr;

        
        
    }
};