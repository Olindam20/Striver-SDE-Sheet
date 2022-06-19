class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=0,j=0,curr=0,res=0;
    	while(i<n && j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        curr++;
    	        i++;
    	    }
    	    else
    	    {
    	        curr--;
    	        j++;
    	    }
    	    res=max(curr,res);
    	}
    	return res;
    }
};
