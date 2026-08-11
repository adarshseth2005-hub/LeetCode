class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry  = 1;
        vector<int> ans;
        for(int i = n-1 ; i>=0 ; i--){
            if(digits[i]+carry>=10){
                ans.push_back(0);
                carry =1;
            }
            else{
                ans.push_back(digits[i]+carry);
                carry=0;
            }
        }
        if(carry == 1) ans.push_back(carry);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};