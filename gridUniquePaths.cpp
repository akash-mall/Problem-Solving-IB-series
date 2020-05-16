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

//********************************************************************************

//Solution 2 using  combinatrics

long int fact(long int a)
{
    if(a<=1) return 1;
    return fact(a-1)*a;
}


int Solution::uniquePaths(int A, int B) {
    long int cnt = 0;
    long m = max(A,B),f=1;
    long minm = min(A,B);
    for(long i = (A+B-2);i>m-1;--i)
    {
        f *= (i);
    }
    cnt = f/fact(minm-1);
    return (int)cnt;
}
