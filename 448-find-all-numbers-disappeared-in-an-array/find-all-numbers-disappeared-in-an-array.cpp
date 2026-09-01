class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctidx = nums[i]-1;
            if(nums[i]==nums[correctidx]) i++;
            else swap(nums[i],nums[correctidx]);
        }
        for(int i=0 ; i<n ; i++){
            if(nums[i]!=i+1) ans.push_back(i+1);
        }
        return ans;
    }
};