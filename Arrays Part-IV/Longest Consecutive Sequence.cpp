class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int streak=0;
        for(auto x:nums) st.insert(x);
        
        for(auto x:nums)
        {
            if(!st.count(x-1))
            {
                int num=x;
                int len=1;
                while(st.count(num+1))
                {
                    len++;
                    num++;
                }
                streak=max(streak,len);
            }
        }
        return streak;
    }
};