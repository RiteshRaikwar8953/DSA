class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int lo = 0;
        int hi = n-1;
        while(lo<hi){
            if(((s[lo]== 'a' || s[lo]== 'e' || s[lo]=='i' || s[lo]=='o' || s[lo]=='u')  || (s[lo]== 'A' || s[lo]== 'E' || s[lo]=='I' || s[lo]=='O' || s[lo]=='U') ) && ((s[hi]== 'a' || s[hi]== 'e' || s[hi]=='i' || s[hi]=='o' || s[hi]=='u') || (s[hi]== 'A' || s[hi]== 'E' || s[hi]=='I' || s[hi]=='O' || s[hi]=='U'))){
                swap(s[lo],s[hi]);
                lo++;
                hi--;
            }
            else if(((s[lo]== 'a' || s[lo]== 'e' || s[lo]=='i' || s[lo]=='o' || s[lo]=='u')  || (s[lo]== 'A' || s[lo]== 'E' || s[lo]=='I' || s[lo]=='O' || s[lo]=='U')))    hi--;
            else lo++;
        }
        return s;
    }
};