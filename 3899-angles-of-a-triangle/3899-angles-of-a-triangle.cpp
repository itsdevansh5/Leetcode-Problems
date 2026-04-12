class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>res;
        double PI=acos(-1);
        int a=sides[0];
        int b=sides[1];
        int c=sides[2];
        double s=(a+b+c)/2.0;
        if((s-a)<=0 || (s-b)<=0 || (s-c)<=0) return res;

         double cosa=(b*b + c*c - a*a)/(2*(double)b*c);
        double cosb=(a*a + c*c - b*b)/(2*(double)a*c);
        double cosc=(a*a + b*b -c*c)/(2*(double)a*b);
        double value1=acos(min(1.0,max(-1.0,cosa)));
        double value2=acos(min(1.0,max(-1.0,cosb)));
        double value3=acos(min(1.0,max(-1.0,cosc)));
        res={value1*(180/PI),value2*(180/PI),value3*(180/PI)};
        std::sort(res.begin(),res.end());
        return res;
    }
};