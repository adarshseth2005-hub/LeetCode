class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i = 0 , j = n-1;
        int maxArea = 0;
        while(i<j){
            int h = min(arr[i], arr[j]), w= j-i;
            maxArea = max(h*w , maxArea);
            if(arr[i] <arr[j]) i++;
            else j--;
        }
        return maxArea;
    }
};