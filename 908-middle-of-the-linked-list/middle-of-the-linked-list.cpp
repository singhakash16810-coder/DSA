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
    
    int getLength(ListNode*head){
        int len = 0;
        while(head!=NULL){
            head = head->next;
            len++;
        }
        return len;
    }

    
    ListNode* middleNode(ListNode* head) { 
         
         int len = getLength(head);  // length nikal liya
         int ans = len/2;   // middle of link list hoga
         ListNode*temp = head;   // ans tk jana hai

         int cnt = 0;           // yha se jayenge
         while(cnt<ans){
            temp = temp->next;
            cnt++;
         }
         return temp;

        
    }
};