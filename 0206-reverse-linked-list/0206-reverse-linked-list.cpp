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
 //https://leetcode.com/problems/reverse-linked-list/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* truoc = NULL; 
        ListNode* vitri = head; 

        while (vitri != NULL) {
            
            ListNode* sau = vitri->next;

        
            vitri->next = truoc;


            truoc = vitri;      
            vitri = sau;  
        }


        return truoc;
    }
};