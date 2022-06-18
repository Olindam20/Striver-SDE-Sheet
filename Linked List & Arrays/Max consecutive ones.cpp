class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int res=INT_MIN,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i<nums.size() && nums[i]==1)
            {
                cnt++;
                i++;
            }
            res=max(res,cnt);
            cnt=0;
        }
        return res;
    }
};
    