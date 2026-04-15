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
 //https://leetcode.com/problems/partition-list/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smallDummy(0), bigDummy(0);
        ListNode* small = &smallDummy;
        ListNode* big = &bigDummy;

        while (head != nullptr) {
            if (head->val < x){
                small -> next = head;
                small = small -> next;
            } else{
                big -> next = head;
                big = big -> next;
            }
            head = head -> next;
        }
        big -> next = nullptr;
        small -> next = bigDummy.next;
        return smallDummy.next;
    }
};