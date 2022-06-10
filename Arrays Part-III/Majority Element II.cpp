class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Using Moore's voting algo
        //Maximum number of majority element is two
        int num1=INT_MIN,num2=INT_MIN,c1=0,c2=0;
        for(auto i:nums)
        {
            if(num1==i) c1++;
            else if(num2==i) c2++;
            else if(c1==0)
            {
                num1=i;
                c1=1;
            }
            else if(c2==0)
            {
                num2=i;
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        c1=0,c2=0;
        for(auto i:nums)
        {
            if(i==num1 ) c1++;
            if(i==num2 ) c2++;
            
        }
        vector<int>vec;
        if(c1>nums.size()/3) vec.push_back(num1);
        if(c2>nums.size()/3) vec.push_back(num2);
        return vec;
    }
};