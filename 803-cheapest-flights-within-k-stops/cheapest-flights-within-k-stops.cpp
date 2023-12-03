class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(auto it1:flights)
        {
            adj[it1[0]].push_back({it1[1],it1[2]});

        }

        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});

        vector<int>dist(n,1e9);
        dist[src]=0;

        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;

            if(stops>k)
            continue;

            for(auto iter:adj[node])
            {
                int adjNode=iter.first;
                int edgeweight=iter.second;

                if(cost+edgeweight<dist[adjNode] && stops<=k)
                {
                    dist[adjNode]=cost+edgeweight;
                    q.push({stops+1,{adjNode,cost+edgeweight}});
                }
            }
        }

        if(dist[dst]==1e9)
        return -1;
        else
        return dist[dst];
    }
};