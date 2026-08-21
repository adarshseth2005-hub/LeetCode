class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int carry = 1;
        for(int i = n-1; i>=0 ; i--){
            if(arr[i]+carry > 9){
                ans.push_back(0);
                carry = 1;
            }
            else{
                ans.push_back(carry+arr[i]);
                carry = 0;
            }
        }
        if(carry == 1) ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};