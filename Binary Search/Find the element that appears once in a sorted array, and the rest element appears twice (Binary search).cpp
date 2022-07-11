class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-2;  //As the element might be present in the last index
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==nums[mid^1]) //to check the breakpoint exits in the lest half or the right half
                low=mid+1; 
            else
                high=mid-1;
        }
        return nums[low];
    }
};