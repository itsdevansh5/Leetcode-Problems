class ProductOfNumbers {
public:
   vector<int>l;
    ProductOfNumbers() {
        this->l={1};
    }
    
    void add(int num) {
        if(num!=0){
        int last=l.back();
        l.push_back(num*last);
        }
        else{
            this->l={1};
        }
        return;
    }
    
    int getProduct(int k) {
        if(k<=l.size()-1)
        return (l.back()/l[l.size()-1-k]);
        else
        return 0;
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */