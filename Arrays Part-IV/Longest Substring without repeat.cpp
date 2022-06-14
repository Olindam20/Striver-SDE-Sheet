class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int low=0,high=0,len=0;
        while(high<n)
        {
            if(mp.find(s[high])!=mp.end())
            {
                low=max(mp[s[high]]+1,low);
            }
            mp[s[high]]=high;
            len=max(len,high-low+1);
            high++;
        }
        return len;
    }
};