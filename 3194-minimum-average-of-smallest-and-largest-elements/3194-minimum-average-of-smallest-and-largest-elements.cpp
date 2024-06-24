class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double minAvg = 50;

        int l=0; int r = nums.size()-1;
        while(l<r)
        {
            minAvg = min(minAvg, 0.5*(nums[l]+ nums[r]));
            l++;
            r--;
        }
        return minAvg;
    }
};