class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>ans;
        int lo = 0;
        int hi = n-1;
        while(lo<hi){
            if((numbers[lo]+numbers[hi])>target)    hi--;
            else if((numbers[lo]+numbers[hi])<target)    lo++;
            else if((numbers[lo]+numbers[hi])==target){
                ans.push_back(lo+1);
                ans.push_back(hi+1);
                break;
            }
        }
        return ans;
    }
};