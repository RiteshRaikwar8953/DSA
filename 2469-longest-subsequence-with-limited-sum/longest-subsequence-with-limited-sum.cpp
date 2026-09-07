class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int>ans(m);
        //SORT nums
        sort(nums.begin(),nums.end());  //TC = 0(nlogn) , SC = O(logn)
        //Make Nums prefix Sum
        for(int i=1 ; i<n ;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0 ; i<m ; i++){  //TC = O(m*n)
            int maxlen = 0;
            int lo = 0; //Binary Search
            int hi = n-1;
            while(lo<=hi){
                int mid = lo+(hi-lo)/2;
                if(nums[mid]>queries[i])  hi = mid-1;
                else{
                    maxlen = mid+1;
                    lo = mid+1;
                }
            }
            ans[i] = (maxlen);
        }
        return ans;  //TC = O(n*(m+logn)) ~ O(n*m)
    }
};