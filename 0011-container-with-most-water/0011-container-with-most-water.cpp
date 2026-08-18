class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i = 0 , j = n-1;
        int maxArea = 0;
        while(i<j){
            int h = min(arr[i], arr[j]);
            int w = j-i;
            int area = h*w;
            if(area > maxArea){
                maxArea = area;
            }
            if(arr[i] <arr[j]) i++;
            else j--;
        }
        return maxArea;
    }
};