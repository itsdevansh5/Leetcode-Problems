class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode dummyBefore(0);
        ListNode dummyAfter(0);

        ListNode* before = &dummyBefore;
        ListNode* after = &dummyAfter;

        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;  // 1️⃣ Save next
            curr->next = nullptr;             // 2️⃣ Detach current node

            if (curr->val < x) {
                before->next = curr;          // 3️⃣ Attach to before list
                before = before->next;
            } else {
                after->next = curr;           // 3️⃣ Attach to after list
                after = after->next;
            }

            curr = nextNode;                  // 4️⃣ Move forward safely
        }

        before->next = dummyAfter.next;       // 5️⃣ Connect two lists

        return dummyBefore.next;
    }
};
