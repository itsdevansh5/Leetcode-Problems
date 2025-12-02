class RandomizedSet {
public:
unordered_map<int,int>m;
         vector<int>n;
   
    RandomizedSet() {
         srand(time(0));
         
        

        
    }
    
    bool insert(int val) {
        if(m.find(val)==m.end()){
        int t=n.size();
        m[val]=t;
        n.push_back(val);
        return true;
        }
        return false;
        
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
        return false;
        else{
            int ind=m[val];
            int last=n[n.size()-1];
            n[ind]=last;
            m[last]=ind;
            n.pop_back();
            
            m.erase(val);
            return true;
        }
        
    }
    
    int getRandom() {

        int indx=rand() % n.size();
        return n[indx];

        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */