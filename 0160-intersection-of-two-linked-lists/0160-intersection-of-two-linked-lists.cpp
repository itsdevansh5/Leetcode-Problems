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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * a=headA;
        set<ListNode *>mp;
        while(a!=nullptr){
            mp.insert(a);
            a=a->next;
        }
        ListNode * b=headB;
       while(b!=nullptr){
        if(mp.find(b)!=mp.end())
        return b;
        b=b->next;
       }
       return nullptr;
        
    }
};