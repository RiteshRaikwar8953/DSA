class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        for(int i=0 ; i<n ;i++){
            for(int j=0 ; j<m ;j++){
                if(nums1[i]==nums2[j]){
                    bool flag = false;
                    while(j<m){
                        if(nums2[j]>nums1[i]){
                            ans.push_back(nums2[j]);
                            flag = true;
                            break;
                        }
                        j++;
                    }
                    if(flag==false) ans.push_back(-1);
                }
            }
        }
        if(ans.size()==n+1) ans.pop_back();
        return ans;
    }
};