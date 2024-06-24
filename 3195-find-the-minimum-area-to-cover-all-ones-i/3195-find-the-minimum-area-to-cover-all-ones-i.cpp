class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int rmin = INT_MAX; int rmax = -1; int cmin = INT_MAX; int cmax = -1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    rmin = min(rmin, i);
                    cmin = min(cmin, j);
                    rmax = max(rmax, i);
                    cmax = max(cmax, j);
                }
            }
        }

        int len = (rmax-rmin) + 1;
        int bre = (cmax - cmin) + 1;

        return len*bre; 
    }
};