int findMinimumCoins(int amount) 
{
    // Write your code here
    int arr[9]={1,2,5,10,20,50,100,500,1000};
    sort(arr,arr+9,greater<int>());
    int res=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]<=amount)
        {
            int num=amount/arr[i];
            res+=num;
            amount-=num*arr[i];
        }
        if(amount==0) break;
    }
    return res;
}
