class Solution {
public:
    int compress(vector<char>& chars) {
     int i=0;
     int j=0;
     while(j<chars.size()){
        char v=chars[j];
        int count=0;
        while(j<chars.size() && v==chars[j]){
            j++;
            count++;
        }
       chars[i]=v;
       if (count > 1) {
    string s = to_string(count);
    for (char c : s) {
        i++;
        chars[i] = c;
    }
}

i++; 


     }   
     return i;
    }
};