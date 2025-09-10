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
        set<ListNode *>ll;
        ListNode*temp=head;
        while(temp!=nullptr){
            if(ll.find(temp)!=ll.end())
            return temp;
            ll.insert(temp);
            temp=temp->next;
        }
        return nullptr;
        
        
    }
};