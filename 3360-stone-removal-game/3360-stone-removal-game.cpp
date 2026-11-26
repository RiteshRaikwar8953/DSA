class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)    return false;
        bool flag = true;
        int i = 10;
        n-=i;
        i--;
        while(n>=i && i>0){
            n-=i;
            if(flag==false) flag = true;
            else flag = false;
            i--;
        }
        return flag;
    }
};