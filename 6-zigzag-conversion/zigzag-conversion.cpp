class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if (numRows == 1 || numRows >= n){
            return s;
        }
        vector<vector<char>> ans(numRows, vector<char>(n, ' '));
        int i=0 ,j =0 ,l=0;
        while(l<n){
            for(int i=0 ; i<numRows && l < n ; i++){
                ans[i][j] = s[l++];
            }
            i = numRows - 2;
            j++;
            while (i> 0 && l < n) {
                ans[i][j] = s[l++];
                i--;
                j++;
            }
        }
        string result = "";
            for(int i=0; i<numRows; i++) {
                for(int j=0; j<n; j++) {
                    if(ans[i][j] != ' '){
                        result += ans[i][j];
                    }
                }
            }
            return result;
    }
};