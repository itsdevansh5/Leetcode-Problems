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
        
        // This loop will reverse 'm' nodes starting from 't'
        for (int i = 0; i < m && curr != nullptr; ++i) {
            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        
        // 'prev' is the new head of the reversed sublist, but 't' is now its tail.
        // We need to link the reversed sublist back to the rest of the list.
        // 'curr' holds the head of the un-reversed part of the list.
        // 't->next = curr;' is the missing link. But since we return the head of the reversed list,
        // we need to handle this in rotateRight.
        
        return prev;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        
        // 1. Find the total number of nodes
        int n = 1;
        ListNode * tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
            n++;
        }
        
        // 2. Calculate the effective rotation
        k = k % n;
        if (k == 0) return head;

        // 3. Find the split point
        // The new head will be the (n-k)-th node from the original head
        ListNode* new_tail = head;
        for (int i = 0; i < n - k - 1; ++i) {
            new_tail = new_tail->next;
        }
        
        // 4. Set the new head and detach the list
        ListNode* new_head = new_tail->next;
        new_tail->next = nullptr;
        
        // 5. Connect the original tail to the original head
        tail->next = head;

        return new_head;
    }
};