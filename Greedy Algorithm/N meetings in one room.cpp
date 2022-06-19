class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        if(n==0)
           return 0;
       vector<vector<int>> vec;
       
       for(int i{};i<n;i++){
           vector<int> v;
           v.push_back(end[i]);
           v.push_back(start[i]);
           vec.push_back(v);
       }
       sort(vec.begin(), vec.end());
       int limit = vec[0][0];
       int count=1;
       for(int i{1};i<vec.size();i++){
           if(vec[i][1]>limit){
               limit = vec[i][0];
               count++;
           }
       }
       return count;
    }
};