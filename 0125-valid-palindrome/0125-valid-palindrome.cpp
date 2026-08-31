class Solution {
public:

    bool isNonAlpha(char x){
        if(x>= 65 && x<=90) return false;
        else if(x>=97 && x<= 122) return false;
        else if(x>=48 && x<= 57) return false;
        else return true;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j =n-1;
        while(i<j){
            char x = s[i], y = s[j];
            if(x>=65 && x<= 90) x+= 32;
            if(y>=65 && y<= 90) y+= 32;
            if(isNonAlpha(x)) i++;
            else if(isNonAlpha(y)) j--;
            else{
                if(x != y) return false;
                i++;
                j--;
            }
            
        }
        return true;
    }
};