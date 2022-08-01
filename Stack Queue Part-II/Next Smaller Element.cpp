vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>st;
    int n=A.size();
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {   
        while(!st.empty() && st.top()>=A[i]) st.pop();
        ans[i]=st.empty()?-1:st.top();
        st.push(A[i]);
    }
    return ans;
}
