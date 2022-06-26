class Solution {
public:
    string getPermutation(int n, int k) {
        string res="";
        vector<int>nums;
        int fac=1;
        for(int i=1;i<=n;i++)
        {
            fac*=i;
            nums.push_back(i);
        }
        fac/=n;
        k--;
        while(true)
        {
            res+=to_string(nums[k/fac]);
            nums.erase(nums.begin()+(k/fac));
            if(nums.size()==0) break;
            k=k%fac;
            fac/=nums.size();
        }
        return res;
    }
};