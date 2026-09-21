class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;
        int j=n-1;
        int k=n-1;
        while(s[k]==' '){
            j--;
            k--;
        }
        for(int i=j ; i>=0 ;i--){
            if(s[i]==' ')  break;
            else length++;
        }
        return length;
    }
};