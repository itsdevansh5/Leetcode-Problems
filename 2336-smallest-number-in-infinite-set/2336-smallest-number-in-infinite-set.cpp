class SmallestInfiniteSet {
public:
    unordered_set<int>removed;
    int smallest=1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        removed.insert(smallest);
        int ans=smallest;
        while(removed.find(smallest)!=removed.end()){
            smallest++;
        }
        return ans;

    }
    
    void addBack(int num) {
        if(removed.find(num)!=removed.end()){
        removed.erase(num);
        if(num<smallest)
        smallest=num;
        }
        return;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */