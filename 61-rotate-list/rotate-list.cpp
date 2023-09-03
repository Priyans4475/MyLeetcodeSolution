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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        return nullptr;
         ListNode* curr=head;
         int x=0;
        int cnt=0;
        while(curr!=nullptr)
        {
            cnt++;
            curr=curr->next;
        }
        if(cnt==1 )
        return head;
        if( k%cnt==0)
        return head;
        if(k>cnt)
        x=cnt-k%cnt;
        else
        x=cnt-k;
        ListNode* curr1=head;
        for(int i=0;i<x-1;i++)
        {
              curr1=curr1->next;
        }

         ListNode* temp=curr1->next;
         curr1->next=nullptr;

         ListNode* dummy=temp;
         while(dummy->next!=nullptr)
         dummy=dummy->next;
         dummy->next=head;
         
    return temp;
    }
};