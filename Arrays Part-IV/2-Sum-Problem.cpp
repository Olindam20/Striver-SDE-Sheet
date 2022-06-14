class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans,temp;
        
        temp=nums;
        
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        int sum=0;
        while(s<e)
        {
            sum=nums[s]+nums[e];
            if(sum==target)break;
            else if(sum>target) e--;
            else if(sum<target) s++;
            
        }
        for(int i=0;i<nums.size();i++)
        {
           if (temp[i]==nums[s]) ans.push_back(i);
        else if (temp[i]==nums[e]) ans.push_back(i);
        }
        return ans;
    }
    
};
 