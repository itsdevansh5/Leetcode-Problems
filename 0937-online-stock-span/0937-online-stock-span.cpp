class StockSpanner {
public:
    vector<int>p;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        for(int i=p.size()-1;i>=0;i--){
            if(p[i]<=price)
            count++;
            else
            break;
        }
        this->p.push_back(price);
        return count;

        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */