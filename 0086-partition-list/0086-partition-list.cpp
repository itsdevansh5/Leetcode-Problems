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
        ListNode * dummy=head;
        ListNode dummybefore(0);
        ListNode dummyafter(0);
        ListNode * before=&dummybefore;
        ListNode * after=&dummyafter;
        while(dummy!=nullptr){
            if(dummy->val>=x){
                after->next=dummy;
                after=after->next;
            }
            else{
                before->next=dummy;
                before=before->next;
            }
            dummy=dummy->next;
        }
        after->next=nullptr;
        before->next=dummyafter.next;
        return dummybefore.next;
    }
};