class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int maxlen = INT_MIN;
        int len;
        int i=0,j=0;
        while(j<n){
            if(nums[j]==1)  j++;
            else{
                if(flips<k){
                    flips++;
                    j++;
                }
                else{   //flips==k
                    len = j-i;
                    maxlen = max(maxlen,len);
                    while(nums[i]==1)   i++;
                    i++;
                    j++;
                }
            }
           
        }
        len = j-i;
        maxlen = max(maxlen,len);
        return maxlen;
    }
};