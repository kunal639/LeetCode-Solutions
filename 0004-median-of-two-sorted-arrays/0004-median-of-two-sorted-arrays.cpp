class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        double median = 0.0; int total = nums1.size() + nums2.size();
        vector<int>sorted;
        int med = total/2;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                sorted.push_back(nums1[i]);
                i++;
            }
            else
            {
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            sorted.push_back(nums1[i]);
            i++;
        }
        
        while(j<nums2.size())
        {
            sorted.push_back(nums2[j]);
            j++;
        }

        if(total&1)
        {
            return (sorted[med])*1.0;;
        }
        else
        {
            return ((sorted[med]) + (sorted[med-1]))/2.0;
        }
    }
};