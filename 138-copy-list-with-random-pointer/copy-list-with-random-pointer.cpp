/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>mp;
         Node* curr = head;

    while (curr != nullptr) {
        Node* temp = new Node(curr->val);
        mp[curr] = temp;
        curr = curr->next;
    }

    curr = head;

    while (curr != nullptr) {
        Node* clonecurr = mp[curr];
        clonecurr->next = mp[curr->next];
        clonecurr->random = mp[curr->random];
        curr = curr->next;
    }

    return mp[head];
    }
};