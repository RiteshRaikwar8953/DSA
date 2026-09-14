class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int minlen = INT_MAX; 
        int len = 0;
        int i=0,j=0;
        bool flag =false;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len = j-i+1;
                minlen = min(minlen,len);
                sum -= nums[i];
                flag =true;
                i++;
            }
            j++;
        }
        if(flag==false) return 0;
        return minlen;
    }
};