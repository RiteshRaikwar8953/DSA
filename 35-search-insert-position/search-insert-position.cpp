class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        int lo = 0,hi = n-1;
        while(lo<hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target)    return mid;
            else if(nums[mid]>target)   hi--;
            else lo++;
        }
        for(int i =0 ; i<n ; i++){
            if(nums[i]<target)  count++;
        }
        return count;
    }
};