/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //https://leetcode.com/problems/intersection-of-two-linked-lists/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        if (headA == NULL || headB == NULL) return NULL;

        ListNode *pA = headA;
        ListNode *pB = headB;


        while (pA != pB) {

            
            if (pA == NULL) {
                pA = headB; 
            } else {
                pA = pA->next; 
            }

            
            if (pB == NULL) {
                pB = headA; 
            } else {
                pB = pB->next; 
            }
        }


        return pA;
    }
};