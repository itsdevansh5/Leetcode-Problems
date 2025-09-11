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
   bool isPalindrome(ListNode* head) {
    if (!head) return true;
    ListNode* temp = head;
    int count = 0;
    while (temp != nullptr) {
        temp = temp->next;
        count++;
    }
    temp = head;
    stack<int> s;
    // Push first half values
    for (int i = 0; i < count / 2; i++) {
        s.push(temp->val);
        temp = temp->next;
    }
    // If odd length, skip middle node
    if (count % 2 != 0) temp = temp->next;
    // Compare second half with stack
    while (temp != nullptr) {
        if (s.empty() || s.top() != temp->val)
            return false;
        s.pop();
        temp = temp->next;
    }
    return s.empty();
}

};