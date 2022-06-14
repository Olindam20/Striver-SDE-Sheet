class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
        int sum=0,maxLen=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
                maxLen=max(maxLen,i+1);
            else
            {
                if(mp.find(sum)!=mp.end())
                    maxLen=max(maxLen,i-mp[sum]);
                
                else
                    mp[sum]=i;
            }
            
        }
        return maxLen;
    }
};