class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> ans(n,vector<int> (m));
        for(int j = 0 ; j<m ; j++){
            for(int i = 0 ; i<n ; i++){
                ans[i][j] = arr[j][i];
            }
        }
        return ans;
    }
};