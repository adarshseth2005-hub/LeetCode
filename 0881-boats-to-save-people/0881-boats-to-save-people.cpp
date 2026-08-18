class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int i = 0, j= n-1;
        int count = 0;
        while(i<=j){
            if(people[i] + people[j] <= limit){
                count++;
                i++;
                j--;
            }
            else{
                if(people[i]>people[j]){
                    count++;
                    i++;
                }
                else{
                    count++;
                    j--;
                }
            }
        }
        if(i == j){
            count++;
        }
        return count;
    }
};