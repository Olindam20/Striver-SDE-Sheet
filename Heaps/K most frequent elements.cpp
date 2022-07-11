class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp) pq.push({x.second,x.first});
        vector<int>vec;
        while(k)
        {
            vec.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return vec;
    }
};