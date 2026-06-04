class Solution {
public:
    int waviness(int n){
      string num=to_string(n);
      int ct=0;
      for(int i=1;i<num.size()-1;i++){
           if(num[i]>num[i-1] && num[i]>num[i+1]) ct++;
           else if(num[i]<num[i-1] && num[i]<num[i+1]) ct++;
      }
      return ct;

    }
    int totalWaviness(int num1, int num2) {
        int tot=0;
        for(int i=num1;i<=num2;i++){
          tot+=waviness(i);
        }
        return tot;
    }
};