
struct triplets
{
    int value,aPos, vPos;
    triplets(int val, int ap, int vp)
    {
        value=val;
        aPos=ap;
        vPos=vp;
    }
};
struct cmp
{
    bool operator()(triplets &t1, triplets &t2 )
    {
        return t1.value > t2.value;
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        priority_queue<triplets, vector<triplets>,cmp>pq;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            triplets t(arr[i][0],i,0);
            pq.push(t);
        }
        while(!pq.empty())
        {
            triplets res = pq.top();
            pq.pop();
            int val=res.value, ap=res.aPos, vp=res.vPos;
            v.push_back(val);
            if(vp+1 < arr[ap].size())
            {
                triplets t(arr[ap][vp+1], ap ,vp+1);
                pq.push(t);
            }
        }
        return v;
    }
};