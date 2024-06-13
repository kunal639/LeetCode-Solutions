class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int>mpp; int XOR = 0;
        for(int x:nums)
        {
            mpp[x]++;
        }
        
        for(auto &itr:mpp)
        {
            if(itr.second == 2)
            {
                XOR = XOR ^ itr.first;
            }
        }
        return XOR;
    }
};