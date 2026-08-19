class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int lo = 0, hi = n-1;
        int foc = -1, loc=-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;

            if(nums[mid]>target) hi = mid -1;
            else if(nums[mid]<target) lo = mid+1;
            else{
                foc = mid;
                hi = mid-1;
            }    
        }

        lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;

            if(nums[mid]>target) hi = mid -1;
            else if(nums[mid]<target) lo = mid+1;
            else{
                loc = mid;
                lo = mid+1;
            }
            
        }
        return {foc,loc};
    }
};