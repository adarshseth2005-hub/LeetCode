class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();

        int i = 0, j = n-1;
        while(i<m && j>=0){
            if(arr[i][j] > target) j--;
            else if(arr[i][j] <target) i++;
            else return true;
        }

        return false;
    }
};