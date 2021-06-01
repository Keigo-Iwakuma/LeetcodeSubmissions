/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> visited{};

        ListNode* node = head;
        while (node != nullptr) {
            if (visited.find(node) != end(visited)) return node;
            visited.emplace(node);
            node = node->next;
        }
        return nullptr;

//               2. Floyd's Algorithm
//           Time complexity:     O(N)
//           Space complexity:    O(1)
        ListNode *slow = head, *fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                break;
        }
        if(!fast || !fast->next){
            return nullptr;
        }
        slow = head;
        while(fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
// @lc code=end

