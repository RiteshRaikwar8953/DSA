class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int target = nums[n-1];
        int count = 0;
        for(int i=0 ; i<n-1 ; i++){
            while(nums[i]!=target){
                if(nums[i]<target){
                    count+=(target-nums[i]);
                    nums[i]=target;
                }
            }
        }
        return count;
    }
};