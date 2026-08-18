class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size();
        int count1 = 0, count2 =0;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0; j<m ; j++){
                if(nums1[i] == nums2[j]){
                    count1++;
                    break;
                }
            }
        }
        for(int j = 0 ; j<m ; j++){
            for(int i = 0; i<n ; i++){
                if(nums2[j] == nums1[i]){
                    count2++;
                    break;
                }
            }

        }
        return {count1, count2};
    }
        
};