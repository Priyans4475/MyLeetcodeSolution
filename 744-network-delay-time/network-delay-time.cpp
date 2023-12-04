class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<pair<int,int>>adj[n+1];
        for(auto it1:times)
        {
            adj[it1[0]].push_back({it1[1],it1[2]});

        }
                priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,INT_MAX);
        
        
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty())
        {
            int dis=pq.top().first;
            int node=pq.top().second;
            
            pq.pop();
            
            for(auto it:adj[node])
            {
                int edgeWeight=it.second;
                int adjNode=it.first;
                
                if(dis + edgeWeight < dist[adjNode])
                {
                    dist[adjNode]=dis + edgeWeight;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        int ans=INT_MIN;
        for(int i=1;i<n+1;i++)
       
        {
            ans=max(ans,dist[i]);
        }

        if( ans==INT_MAX)
        return -1;
        else
        return ans;

    }
};