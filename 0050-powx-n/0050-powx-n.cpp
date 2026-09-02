class Solution {
public:
    double pow(double a, long long b){
        if(b==0) return 1;
        double p = pow(a,b/2);
        return (b%2==0)? p*p : p*p*a;
    }
    double myPow(double a, long long b) {
        bool flag = (b>=0);
        double ans = pow(a,abs(b));
        return flag? ans : 1/ans;
    }
};