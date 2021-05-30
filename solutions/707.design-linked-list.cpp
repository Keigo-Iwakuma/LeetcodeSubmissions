/*
 * @lc app=leetcode id=707 lang=cpp
 *
 * [707] Design Linked List
 */

// @lc code=start
class MyLinkedList {
private:
    // Struct that is a linked list
    struct TreeNode {
        int val;
        TreeNode* next;

        TreeNode(int value)
            : val(value)
            , next(NULL) {
        }
    };

    // Pointers that stores the head and tail of the
    // single linked list
    TreeNode* head;
    TreeNode* tail;

    // count to know the number of nodes available
    int nextNodeIdx;

public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        nextNodeIdx = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        // Check if the nodes are available
        if (nextNodeIdx <= index) {
            // There are less nodes than the index
            return -1;
        }

        TreeNode* temp = head;
        while (index-- > 0) {
            temp = temp->next;
        }

        return temp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        TreeNode* node = new TreeNode(val);

        node->next = head;
        head = node;
        nextNodeIdx += 1;

        if (tail == NULL) {
            tail = head;
        }
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        TreeNode* node = new TreeNode(val);

        if (tail != NULL) {
            tail->next = node;
        }

        tail = node;
        head = head == NULL ? node : head;
        nextNodeIdx += 1;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (nextNodeIdx < index) {
            return;
        }

        TreeNode* node = new TreeNode(val);

        if (index == 0) {
            node->next = head;
            head = node;
            tail = tail == NULL ? node : tail;
        }
        else if (nextNodeIdx == index) {
            tail->next = node;
            tail = node;
        }
        else {
            TreeNode* temp = head;
            while (--index > 0) {
                temp = temp->next;
            }

            node->next = temp->next;
            temp->next = node;
        }

        nextNodeIdx += 1;

        return;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (nextNodeIdx <= index) {
            return;
        }

        if (index == 0) {
            TreeNode* temp = head->next;

            tail = tail == head ? temp : tail;
            delete head;
            head = temp;
            
        }
        else {
            TreeNode* temp = head;
            while (--index > 0) {
                temp = temp->next;
            }

            TreeNode* del = temp->next;
            temp->next = del->next;

            if (tail == del) {
                tail = temp;
            }

            delete del;
        }
        nextNodeIdx -= 1;
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

