class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int target = nums[(n-1)/2];
        int count = 0;
        for(int i=0 ; i<n ; i++){
            while(nums[i]!=target){
                if(nums[i]<target){
                    count+=(target-nums[i]);
                    nums[i]=target;
                }
                else if(nums[i]>target){
                    count+=(nums[i]-target);
                    nums[i]=target;
                }
                else break;
            }
        }
        return count;
    }
};