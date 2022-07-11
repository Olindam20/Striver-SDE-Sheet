#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){

    
    priority_queue<int>pq;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            int sum=a[i]+b[j];
            pq.push(sum);
            
        }
    }
    vector<int>vec;
    while(!pq.empty())
    {
        int res=pq.top();
        pq.pop();
        vec.push_back(res);
        if(vec.size()==k) return vec;
    }
    return vec;
}