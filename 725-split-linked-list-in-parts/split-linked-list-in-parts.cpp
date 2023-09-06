/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//       //   vector<ListNode*>ans;
      //   vector<ListNode*>temp;
      //   int count=0;
      //   ListNode* curr=head;
      //   while(curr!=NULL)
      //   {
      //     count++;
      //     curr=curr->next;
      //   }
      //   ListNode* curr1=head;
      //   if(count<=k)
      //   {
      //     while(curr1!=NULL)
      //     {
      //       ans.push(curr);
      //       curr=curr->next;
      //     }        }
      //   int size=count/k;
      //   int mod=count%k;
      //   ListNode* newsize=head;
      //   if(mod>0)
      //   { mod=mod-1;
      //     for(int i=0;i<size+1;i++)
      //     {
      //        temp.push_back(newsize);
      //        newsize=newsize->next;
      //     }
      //     ans.push_back(temp);
      //   }
      //   else
      //   for(int i=0;i<size;i++)
      //     {
      //        temp.push_back(newsize);
      //        newsize=newsize->next;
      //     }
      //     ans.push_back(temp);

      // return ans;
      class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int length = 0;
        ListNode* current = head;
        vector<ListNode*> parts;

        while (current) {
            length++;
            current = current->next;
        }

        int base_size = length / k, extra = length % k;
        current = head;

        for (int i = 0; i < k; ++i) {
            int part_size = base_size + (extra > 0);
            ListNode* part_head = nullptr, * part_tail = nullptr;

            for (int j = 0; j < part_size; ++j) {
                if (!part_head) {
                    part_head = part_tail = current;
                } else {
                    part_tail->next = current;
                    part_tail = part_tail->next;
                }

                if (current) {
                    current = current->next;
                }
            }

            if (part_tail) {
                part_tail->next = nullptr;
            }

            parts.push_back(part_head);
            extra = max(extra - 1, 0);
        }

        return parts;
    }
};
//     }
   
// };