class Solution {
public:
    void reverse(vector<int> &v , int st , int end){
        while(st<end){
            int temp = v[st];
            v[st] = v[end];
            v[end] = temp;
            st++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k= k%n;
        reverse(nums,n-k , n-1);
        reverse(nums, 0  , n-k-1);
        reverse(nums , 0 , n-1);
    }
};