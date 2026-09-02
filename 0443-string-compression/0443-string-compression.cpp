class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;

        int i =0, j = 0;
        int n  = chars.size();
        while(j<n){
            if(chars[j] == chars[i]) j++;
            else{
                int len = j-i;
                ans.push_back(chars[i]);
                if(len>9){
                    vector<int> v;
                    while(len>0){
                        int rem = len%10;
                        v.push_back(rem);
                        len/=10;
                    }
                    for(int k = v.size()-1; k>=0 ; k--){
                        ans.push_back(v[k]+48);
                    }
                }
                else if(len > 1) ans.push_back(len+48);
                i=j;
            }
        }
        int len = j-i;
        ans.push_back(chars[i]);
        if(len>9){
            vector<int> v;
            while(len>0){
                int rem = len%10;
                v.push_back(rem);
                len/=10;
            }
            for(int k = v.size()-1; k>=0 ; k--){
                ans.push_back(v[k]+48);
            }
        }
        else if (len > 1) ans.push_back(len + 48);
        chars = ans;
        return chars.size();
    }
};