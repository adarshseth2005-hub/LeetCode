class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr =0 , minc = 0, maxr = n-1, maxc = n-1;

        vector<vector<int>> ans(n, vector<int> (n));
        int a = 1;
        while(minr<=maxr && minc<=maxc){
            for(int i= minc ; i<=maxc ; i++){
                ans[minr][i] = a++;
            }
            minr++;

            if(minr>maxr || minc>maxc) break;
            for(int i = minr ; i<=maxr ; i++){
                ans[i][maxc] = a++;
            }
            maxc--;

            if(minr>maxr || minc>maxc) break;
            for(int i = maxc ; i>=minc ; i--){
                ans[maxr][i] = a++;
            }
            maxr--;

            if(minr>maxr || minc>maxc) break;
            for(int i = maxr ; i>= minr ; i--){
                ans[i][minc] = a++;
            }
            minc++;
        }
        return ans;
    }
};