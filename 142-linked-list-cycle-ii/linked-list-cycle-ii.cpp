/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
        return nullptr;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* curr=head;
        
        while(fast->next!=nullptr &&      fast->next->next!=nullptr)
        {  
             slow=slow->next;
           fast=fast->next->next;

           if(slow==fast)
           {while(curr!=slow)
           {curr=curr->next;

           slow=slow->next;}
           return slow;
           }
           

        }

        return nullptr;

        
    }
};