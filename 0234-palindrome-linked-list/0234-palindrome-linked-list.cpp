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
        if (head == nullptr || head->next == nullptr)
            return true;
        if (head->next->next == nullptr)
            return (head->val == head->next->val);
        ListNode *a = head, *b = head;
        while (b != nullptr && b->next != nullptr) {
            a = a->next;
            b = b->next->next;
        }
        ListNode *curr = a, *prev = nullptr, *nextNode = nullptr;
        while (curr != nullptr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        ListNode *temp = head, *temp2 = prev;
        while (temp2 != nullptr) {
            if (temp->val != temp2->val)
                return false;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;
    }
};