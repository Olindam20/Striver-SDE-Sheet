
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool myCmp(Job a, Job b)
    {
        return (a.profit>b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
       
        sort(arr,arr+n,myCmp);
        int num=0,prof=0;
        int maxi=0;
        for(int i=0;i<n;i++) maxi=max(maxi,arr[i].dead);
        int slot[maxi+1];
        for(int i=0;i<maxi+1;i++) slot[i]=-1;
    
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(slot[j]==-1)
                {
                    slot[j]=i;
                    num++;
                    prof+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int>ans;
        ans={num,prof};
        return ans;
    } 
};