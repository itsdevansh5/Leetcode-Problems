/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * rev(ListNode * t,int m){
        ListNode * prev = nullptr;
        ListNode * curr = t;
        ListNode * next_node = nullptr; 

        if (m == 0 || t == nullptr) return t;
        
        for (int i = 0; i < m && curr != nullptr; ++i) {
            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        

        
        return prev;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        
    
        int n = 1;
        ListNode * tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
            n++;
        }
        
        k = k % n;
        if (k == 0) return head;
        ListNode* new_tail = head;
        for (int i = 0; i < n - k - 1; ++i) {
            new_tail = new_tail->next;
        }
        
        ListNode* new_head = new_tail->next;
        new_tail->next = nullptr;
        tail->next = head;

        return new_head;
    }
};