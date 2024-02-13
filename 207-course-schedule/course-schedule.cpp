class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& prerequisites) {
        vector<int>adj[v];
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }

        vector<int>indegree(v,0);
        for(int i=0;i<v;i++)
        {
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int>q;
        for(int i=0;i<v;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
       vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it:adj[node]){

                indegree[it]--;
                 if(indegree[it]==0)
                   q.push(it);
            }
        }

        if(ans.size()==v)
        return true;
        else
        return false;

    }
};