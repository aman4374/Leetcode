class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        // Ensure list1 starts with the smaller value
        if(list1->val > list2->val) {
            swap(list1, list2);
        }

        ListNode* result = list1;
        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = NULL;

        while(next1 != NULL && curr2 != NULL) {
            if(curr2->val >= curr1->val && curr2->val <= next1->val) {
                // Insert curr2 between curr1 and next1
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                // Move pointers
                curr1 = curr2;
                curr2 = next2;
            } else {
                // Move forward in list1
                curr1 = next1;
                next1 = next1->next;

                if(next1 == NULL) {
                    // Attach rest of list2
                    curr1->next = curr2;
                    return result;
                }
            }
        }

        // If list1 was shorter and ends first
        if(curr2 != NULL) {
            curr1->next = curr2;
        }

        return result;
    }
};
