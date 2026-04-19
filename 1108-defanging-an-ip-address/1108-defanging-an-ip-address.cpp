class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        string period="[.]";
        string a;
        stringstream ss(address);
        while(getline(ss,a,'.')){
            result+=a;
            if(!ss.eof()) result+=period;
        }
        return result;
    }
};