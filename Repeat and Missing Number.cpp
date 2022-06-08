#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int>p;
    int xr=0;
    for(auto x:arr) xr^=x;
    for(int i=1;i<=n;i++) xr^=i;
    
    int rsb=xr&~(xr-1); //To find the right most set bit
    
    int x=0,y=0; //Two separate container to differentiate numbers according to rsb
    for(auto i:arr)
    {
        if(rsb&i) x^=i;
        else y^=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(rsb&i) x^=i;
        else y^=i;
    }
    for(auto i:arr) if(i==x){
        p={y,x};
        return p;
    }
    p={x,y};
    return p;
    
       	
}
