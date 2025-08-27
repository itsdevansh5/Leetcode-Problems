class Solution {
public:
    int myAtoi(string s) {
        int n;
        stringstream ss(s);
        char c;
        ss>>c;
        try{
            n=stoi(s);
        }
        catch(std::invalid_argument &e){
            return 0;
        }
        catch(std::out_of_range &e){
            if(c=='-')
            return INT_MIN;
            else
            return INT_MAX;
            
        }
        return n;
        
    }
};