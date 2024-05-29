class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int childIdx=0; int cookieIdx=0;
        while(childIdx < g.size() && cookieIdx < s.size())
        {
            if(s[cookieIdx] >= g[childIdx])
            {
                childIdx++;
            }
            cookieIdx++;
        }
        return childIdx;
    }
};