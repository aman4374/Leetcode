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

        if(!head || !head->next) return true;

        ListNode* slow = head;
        ListNode* fast = head;


        // find the middle of ll
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reverse the both half
        ListNode* prev = NULL;
        while(slow) {
            ListNode* nextTemp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextTemp;
        }

        // comapare both halves

        ListNode* left = head;
        ListNode* right = prev;

        while(right){
            if(left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};