class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Skip the next node as it's a duplicate
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // optional: free memory
            } else {
                current = current->next; // move to the next distinct element
            }
        }
        
        return head;
    }
};
