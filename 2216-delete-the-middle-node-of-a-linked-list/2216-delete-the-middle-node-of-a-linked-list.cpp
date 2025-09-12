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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp=head;
        if(temp->next==nullptr)
        return nullptr;
        int i=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            i++;
        }
        i=(i/2)-1;
        temp=head;
        while(i>0){
            temp=temp->next;
            i--;


        }
        temp->next=temp->next->next;
        return head;
        


        
    }
};