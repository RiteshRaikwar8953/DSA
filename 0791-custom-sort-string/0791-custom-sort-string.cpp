class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.size();
        int m = s.size();
        string ans = "";
        for(int k=0 ; k<n ; k++){
            char ch = order[k];
            for(int j=0 ; j<m ; j++){
                if(ch==s[j])  ans.push_back(ch);
            }
        }
        for(int i=0 ; i<m ; i++){
            bool flag  =false;
            for(int j=0 ; j<n ; j++){
                if(s[i]==order[j]) flag  = true;
            }
            if(flag == false)    ans.push_back(s[i]);
        }
        return ans;
    }
};