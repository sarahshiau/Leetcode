/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode *current = new ListNode();
        ListNode* temp_1 = l1;
        ListNode* temp_2 = l2;
        while(l1!=NULL&&l2!=NULL){
            int x=l1->val;
            int y=l2->val;
            int z=x+y;

            ListNode *temp = new ListNode(z);
            //////////新增ans節點///////////
            if(ans == NULL){
                ans->next = temp;
                ans->next->next = NULL;
                current = ans->next;
            }else{
                current->next = temp;
                current->next->next = NULL;
                current = current->next;
            }
            //////////////////////////////
            temp_1 = temp_1->next;
            temp_2 = temp_2->next;
             
        }
        return ans;
    }
    

};
// @lc code=end

