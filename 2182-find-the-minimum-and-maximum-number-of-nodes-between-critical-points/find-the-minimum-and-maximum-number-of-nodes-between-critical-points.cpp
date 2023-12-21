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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* temp = head->next;
        vector<int> num;
        int cnt =2;
        while(temp->next != NULL){
            if(prev->val > temp->val && temp->val < temp->next->val){
                num.push_back(cnt);
            }
            else if(prev->val < temp->val && temp->val > temp->next->val){
                num.push_back(cnt);
            }

            prev=temp;
            temp=temp->next;
            cnt++;
        }
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=1;i<num.size();i++){
            int minDif = num[i]-num[i-1];
            if(mini > minDif) mini = minDif;
        }
        if(num.size() >=2){
        int maxDif = num[num.size()-1]-num[0];

        return {mini,maxDif};
        }
        return {-1,-1};
    }
};