class Solution {
public:
    int missingNumber(vector<int>& nums){
        //Method-1
        // int n = nums.size();
        // vector<bool>check(n+1,false);
        // for(int i=0 ; i<n ;i++){
        //     int ele = nums[i];
        //     check[ele] = true;
        // }
        // for(int i=0 ; i<=n ; i++){
        //     if(check[i]==false)  return i;
        // }
        // return 100;

        // Method-2  CYCLIC SORT
    //     int n = nums.size();
    //     int i = 0;
    //     while(i<n){
    //         int correctIdx= nums[i];
    //         if(correctIdx==i || nums[i]==n) i++;
    //         else swap(nums[i],nums[correctIdx]);
    //     }
    //     for(int i=0 ; i<n ; i++){
    //         if(nums[i]!=i) return i;
    //     }
    //     return n;
    // }

    //Method-3 
    int n = nums.size();
    int actualsum = n*(n+1)/2;
    int arraySum = 0;
    for(int i=0 ; i<n ;i++){
        arraySum+=nums[i];
    }
    return actualsum-arraySum;
    }
};