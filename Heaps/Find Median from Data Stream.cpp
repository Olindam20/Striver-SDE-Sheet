class MedianFinder {
public:
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int l=s.size(),h=g.size();
        if(l==0) s.push(num);
        else if(l>h)
        {
            if(num>=s.top()) g.push(num);
            else
            {
                g.push(s.top());
                s.pop();
                s.push(num);
            }
        }
        else
        {
            if(num<=g.top()) s.push(num);
            else
            {
                s.push(g.top());
                g.pop();
                g.push(num);
            }
        }
    }
    
    double findMedian() {
        int l=s.size(),h=g.size();
        if(l>h) return double(s.top());
        else return double(s.top()+g.top())/2;
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */