bool cmp(Item a,Item b)
{
    double m1=double(a.value)/double(a.weight);
    double m2=double(b.value)/double(b.weight);
    return m1>m2;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        double res=0.0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight <= W)
            {
                res+=arr[i].value;
                W-=arr[i].weight;
            }
            else
            {
                res+=arr[i].value*((double)W/arr[i].weight);
                break;
            }
        }
        return res;
    }
        
};
