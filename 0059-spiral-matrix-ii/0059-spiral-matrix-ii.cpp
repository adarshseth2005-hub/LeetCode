class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int> (n,-1));
        int minr = 0, maxr= n-1 , minc =0, maxc = n-1;
        int a=1;
        while(minr<=maxr && minc<=maxc){
            for(int i = minc ; i<=maxc ; i++){
                v[minr][i] = a++;
            }
            minr++;

            if(minr<=maxr && minc<=maxc){
                for(int i = minr ; i<=maxr ; i++){
                    v[i][maxc] = a++;
                }
                maxc--;
            }

            if(minr<=maxr && minc<=maxc){
                for(int i = maxc ; i>=minc ; i--){
                    v[maxr][i] = a++;
                }
                maxr--;
            }

            if(minr<=maxr && minc<=maxc){
                for(int i = maxr ; i>=minr ; i--){
                    v[i][minc]  = a++;
                }
                minc++;
            }
        }
        return v;
    }
};