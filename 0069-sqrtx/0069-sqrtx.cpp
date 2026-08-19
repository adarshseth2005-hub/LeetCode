class Solution {
public:
    int mySqrt(int x) {
        long long lo = 0, hi = x;
        long long ans;
        while(lo<=hi){
            long long mid = lo+(hi-lo)/2;
            if(mid*mid > (long long)x) hi = mid-1;
            else{
                ans = mid;
                lo = mid+1;
            }
        }
        return (int)ans;
    }
};