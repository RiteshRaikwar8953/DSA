class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zeropos = -1;
        int maxlen = 0;
        int count=0;
        int i=0,j=0;
        while(j<n){
            int prev = zeropos;
            if(nums[j]==0){
                count++;
                zeropos = j;
            }
            if(count<=1)    j++;
            else{
                maxlen = max(maxlen,j-i);
                i = prev+1;
                count--;
                j++;
            }
        }
        maxlen = max(maxlen,j-i);
        return maxlen-1;
    }
};