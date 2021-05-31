/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) return false;
        if (head == head->next) return true;

        ListNode *slow = head->next;
        if (slow == nullptr) return false;

        ListNode *fast = head->next->next;
        if (fast == nullptr) return false;

        while(slow != fast) {
            // if (slow == slow->next) return false;
            slow = slow->next;
            if (fast->next == nullptr) return false;
            if (fast->next->next == nullptr) return false;
            fast = fast->next->next;
        }
        return true;
        
    }
};
// @lc code=end

