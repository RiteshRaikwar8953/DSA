class Solution {
public:
    bool isPrime(int n){
        if(n==1)    return false;
        for(int i=2 ; i<=sqrt(n) ; i++){
            if(n%i==0)  return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
    int n = nums.size();
    int lar = 0;
    for(int i=0 ; i<n ; i++){
        if(isPrime(nums[i][n - i - 1]))  lar=  max(lar,nums[i][n - i - 1]);
        if(isPrime(nums[i][i]))    lar = max(lar,nums[i][i]);
    }
    return lar;
    }
};