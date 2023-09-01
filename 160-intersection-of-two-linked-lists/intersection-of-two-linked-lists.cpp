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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1=headA;
        ListNode* curr2=headB;
        int ca=0,cb=0;
        while(curr1!=nullptr )
        {  ca++;
            curr1=curr1->next;
         }
        while(curr2!=nullptr)
        { cb++;
            curr2=curr2->next;
        }
        int cnt=abs(ca-cb);
        ListNode* ncurr1=headA;
        ListNode* ncurr2=headB;
       if(ca>cb)
       {
           while(cnt--)
           {
             ncurr1=ncurr1->next;
           }
       }
       else
       while(cnt--)
           {
             ncurr2=ncurr2->next;
           }

        while(ncurr1!=nullptr && ncurr2!=nullptr) 
        {
            if(ncurr1==ncurr2)
            return ncurr1;
             ncurr1=ncurr1->next;
            ncurr2=ncurr2->next;
        }  
        return nullptr;

        
    }
};