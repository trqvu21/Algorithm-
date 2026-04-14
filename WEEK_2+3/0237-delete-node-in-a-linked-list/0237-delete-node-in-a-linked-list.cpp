/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //https://leetcode.com/problems/delete-node-in-a-linked-list/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* tmp = node->next;
        node->next = node->next->next;
        delete tmp;
    }
};
