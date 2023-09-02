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

    ListNode* rev(ListNode* head)
    {
          ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* temp=nullptr;

        while(curr!=nullptr)
        {
            temp=curr->next;
            curr->next=prev;
           prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* fast=head;
       ListNode* slow =head;

        

        while(fast->next!=nullptr && fast->next->next!=nullptr )
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* slow1=rev(slow->next);
        ListNode* curr=head;
        while(slow1)
        {
            if(slow1->val!=curr->val)
            return false;
             
             slow1=slow1->next;
             curr=curr->next;

        }
        return true;

    }
};