class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>res;
      int n=nums.size();
      if(n==0 || n==1 || n==2) return res;
       sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int low=i+1,high=n-1;
            int sum=-nums[i];
            while(low<high)
            {
                if(sum<nums[low]+nums[high]) high--;
                else if(sum>nums[low]+nums[high]) low++;
                else
                {
                    vector<int>trip(3,0);
                    trip[0]=nums[i];
                    trip[1]=nums[low];
                    trip[2]=nums[high];
                    res.push_back(trip);
                    while(low<high && nums[low+1]==nums[low]) low++;
                    while(low<high && nums[high-1]==nums[high]) high--;
                    low++;
                    high--;
                }
                
                
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return res;
    }
};
  