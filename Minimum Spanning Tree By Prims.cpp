class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> vis(V,0);
        int sum = 0;
        pq.push({0,0});
        
        while(!pq.empty())
        {
            auto it = pq.top();
            int node = it.second;
            int wt = it.first;
            pq.pop();
            
            if(vis[node]) continue;
            
            vis[node] = 1;
            sum += wt;
            
            for(auto u: adj[node])
            {
                int adjNode = u[0];
                int edWt = u[1];
                
                if( !vis[adjNode])
                {
                    pq.push({edWt, adjNode});
                }
            }
        }
        
        return sum;
    }
};
