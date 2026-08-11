class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumAC= 0;
        int n = nums.size();

        for(int i =0 ; i<n ; i++){
            sumAC += nums[i];
        }
        int sum  = n*(n+1)/2;
        return sum-sumAC;
    }
};