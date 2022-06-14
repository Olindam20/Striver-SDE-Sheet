#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>mp;
    int xorr=0,cnt=0;
    for(auto it:arr)
    {
        xorr^=it;
        if(xorr==x) cnt++;
        if(mp.find(xorr^x)!=mp.end())
            cnt+=mp[xorr^x];
        
        mp[xorr]++;
    }
    return cnt;
}