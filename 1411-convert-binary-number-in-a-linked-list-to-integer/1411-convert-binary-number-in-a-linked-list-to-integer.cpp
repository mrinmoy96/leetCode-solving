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
#include<math.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int ans=0;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        
        while(head!=NULL){
            int a=head->val;
            ans=ans+pow(2 , count-1)*a;
            if(count==0){
               if(head->val==1){
                  return 1+ans;
               }
               else{
                  return 0+ans;
               }
            }
            head=head->next;
            count--;
            
            
        }
        return ans;
    }
};