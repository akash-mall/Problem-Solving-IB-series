void utility(int i,int j,int A,int B,int &cnt)
{
    if(i>=A || j>=B) return;
    if(i==A-1 && j==B-1){
        cnt++;
        return;
    }
    utility(i+1,j,A,B,cnt);
    utility(i,j+1,A,B,cnt);
}


int Solution::uniquePaths(int A, int B) {
    int cnt = 0;
    utility(0,0,A,B,cnt);
    return cnt;
}
