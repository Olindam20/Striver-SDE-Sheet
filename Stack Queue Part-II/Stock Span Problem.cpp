class StockSpanner {
public:
    stack<pair<int,int>>st;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt=1;
        i++;
        while(!st.empty() && st.top().first<=price)
        {
            cnt+=st.top().second;
            st.pop();
        }
            
        st.push({price,cnt});
        return cnt;
        
    }
};
 