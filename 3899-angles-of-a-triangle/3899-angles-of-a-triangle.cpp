class Solution {
public:
   vector<double> internalAngles(vector<int>& sides) {
    vector<double> res;

    double a = sides[0];
    double b = sides[1];
    double c = sides[2];

    if(a + b <= c || a + c <= b || b + c <= a) return res;

    double cosa = (1.0*b*b + 1.0*c*c - 1.0*a*a) / (2.0*b*c);
    double cosb = (1.0*a*a + 1.0*c*c - 1.0*b*b) / (2.0*a*c);
    double cosc = (1.0*a*a + 1.0*b*b - 1.0*c*c) / (2.0*a*b);

    cosa = min(1.0, max(-1.0, cosa));
    cosb = min(1.0, max(-1.0, cosb));
    cosc = min(1.0, max(-1.0, cosc));

    double PI = acos(-1);

    res = {
        acos(cosa) * 180.0 / PI,
        acos(cosb) * 180.0 / PI,
        acos(cosc) * 180.0 / PI
    };
    std::sort(res.begin(),res.end());

    return res;
}
};