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
    void deleteNode(ListNode* node) {
    //    ListNode* temp=node->next;
    //    node->val=temp->val;
    //    node->next=temp->next;
    //    delete(temp);
            node->val = node->next->val; //copying the next node value
        node->next = node->next->next; // deleting the node
    }
};