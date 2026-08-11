class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int minr =0 , minc = 0, maxr = arr.size()-1, maxc = arr[0].size()-1;

        vector<int> ans;
        while(minr<=maxr && minc<=maxc){
            for(int i= minc ; i<=maxc ; i++){
                ans.push_back(arr[minr][i]);
            }
            minr++;

            if(minr>maxr || minc>maxc) break;
            for(int i = minr ; i<=maxr ; i++){
                ans.push_back(arr[i][maxc]);
            }
            maxc--;

            if(minr>maxr || minc>maxc) break;
            for(int i = maxc ; i>=minc ; i--){
                ans.push_back(arr[maxr][i]);
            }
            maxr--;

            if(minr>maxr || minc>maxc) break;
            for(int i = maxr ; i>= minr ; i--){
                ans.push_back(arr[i][minc]);
            }
            minc++;
        }
        return ans;
    }
};