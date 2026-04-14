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
 //https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);  
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // fast đi trước n bước
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // cùng đi cho đến cuối
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // xóa node
        slow->next = slow->next->next;

        return dummy.next;
    }
};