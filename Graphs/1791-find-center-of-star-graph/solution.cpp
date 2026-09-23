class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() +1;
        int centre = -1;
        vector<int>degree(n+1, 0);

        for(auto vec : edges){
            int u = vec[0];
            int v = vec[1];

            degree[u]++;
            if(degree[u] > 1)
            {
                centre = u;
                break;
            }
            degree[v]++;
            if(degree[v] > 1)
            {
                centre = v;
                break;
            }
        }
        return centre;
    }
};