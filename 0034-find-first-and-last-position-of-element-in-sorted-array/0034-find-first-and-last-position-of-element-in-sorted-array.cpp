class Solution {
public:
    int findFirstOccurrence(vector<int>&arr, int target)
    {
        int n = arr.size();
        int low = 0; int high = n-1; int first = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==target)
            {
                first = mid;
                high = mid-1;
            }
            else if(arr[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return first;
    }
    int findLastOccurrence(vector<int>&arr, int target)
    {
        int n = arr.size();
        int low = 0; int high = n-1; int last = -1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]==target)
            {
                last = mid;
                low = mid+1;
            }
            else if(arr[mid]<target)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first = findFirstOccurrence(nums,target);
        if(first == -1)
        {
            return {-1,-1};
        }
        int last = findLastOccurrence(nums,target);
        return {first,last};
    }
};