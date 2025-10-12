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
    bool isPalindrome(ListNode* head) {
      if(!head || !head->next){
        return true;
      }  
      ListNode* slow=head;
      ListNode* fast=head;

      while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
      }

      //now reverse the 2nd half
      ListNode* prev=nullptr;
      ListNode* curr=slow;

      while(curr){
        ListNode* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
      }

      //now compare 1st and 2nd half

      ListNode* left=head;
      ListNode* right=prev;

      while(right){
        if(left->val !=right->val){
            return false;
        }
        left=left->next;
        right=right->next;
      }
      return true;
    }
};