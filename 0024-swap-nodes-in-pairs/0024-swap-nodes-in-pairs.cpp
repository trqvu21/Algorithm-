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
 //https://leetcode.com/problems/swap-nodes-in-pairs/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

    
        ListNode* prev = dummy; 
        
       
        ListNode* curr = head;

        
        while (curr != NULL && curr->next != NULL) {
            
            
            ListNode* first = curr;          
            ListNode* second = curr->next;   
            
           
            ListNode* nextPair = second->next; 

            second->next = first;
            
            first->next = nextPair;
            
            prev->next = second;

            prev = first; 
            
            curr = nextPair;
        }

       
        return dummy->next;
    }
};