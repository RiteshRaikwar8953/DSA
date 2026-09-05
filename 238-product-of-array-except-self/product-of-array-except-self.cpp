class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        vector<int>ans(n);
        //prefix product array
        pre[0]=1;
        int p = nums[0];
        for(int i=1 ; i<n ;i++){
            pre[i] = p;
            p*=nums[i];
        }
        //suffix product array
        suf[n-1]=1;
        p = nums[n-1];
        for(int i=n-2 ; i>=0 ;i--){
            suf[i] = p;
            p*=nums[i];
        }
        //answer array
        for(int i=0 ; i<n ;i++){
            pre[i]*= suf[i];
        }
        return pre;
    }
};