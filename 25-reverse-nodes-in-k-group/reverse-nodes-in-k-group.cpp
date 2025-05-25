class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1) return head;

        // Step 1: Check if there are at least k nodes to reverse
        ListNode* node = head;
        int count = 0;
        while (node != NULL && count < k) {
            node = node->next;
            count++;
        }

        if (count < k) return head; // Less than k nodes, return as-is

        // Step 2: Reverse k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        count = 0;

        while (curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Step 3: Recursively call for the next group
        head->next = reverseKGroup(next, k);

        // Step 4: Return new head (which is prev)
        return prev;
    }
};
