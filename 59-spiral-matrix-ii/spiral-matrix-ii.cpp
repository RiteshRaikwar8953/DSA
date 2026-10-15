class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>a(n,vector<int>(n,0));
        int minr=0 , minc=0;
        int maxr=n-1 , maxc=n-1;
        int tne =n*n;
        int count=1;
        while(maxr>=minr && maxc>=minc){
        //RIGHT
        for(int j=minc;j<=maxc;j++){
            a[minc][j]=count++;
        }
        minr++;
        //DOWN
        for(int i=minr;i<=maxr;i++){
            a[i][maxc]=count++;
        }
        maxc--; 
        //LEFT
        if (minr <= maxr){
            for(int j=maxc;j>=minc;j--){
            a[maxr][j]=count++;
            }
        maxr--;
        }
        //UP
        if (minc <= maxc){
            for(int i=maxr;i>=minr;i--){
                a[i][minc]=count++;
            }
            minc++;
        }
    }
        return  a;
    }
};