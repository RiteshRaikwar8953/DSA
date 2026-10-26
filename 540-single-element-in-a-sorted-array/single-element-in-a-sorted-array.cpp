class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo<hi){
            if(nums[lo+1]==nums[lo] && nums[hi-1]==nums[hi]){
                lo+=2;
                hi-=2;
            }
            else if(nums[lo+1]!=nums[lo])   return nums[lo];
            else if(nums[hi-1]!=nums[hi])   return nums[hi];
        }
        return nums[lo];
    }
};