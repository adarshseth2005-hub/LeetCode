class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        int pivot = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] >= 0) hi = mid-1;
            else{
                pivot = mid;
                lo = mid+1;
            }
        }
        int neg = pivot+1;
        pivot = -1; 
        lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid] <= 0) lo = mid+1;
            else{
                pivot = mid;
                hi = mid-1;
            }
        }
        int pos;
        if(pivot ==-1) pos = 0;
        else pos = n-pivot;
        return max(neg,pos);
    }
};