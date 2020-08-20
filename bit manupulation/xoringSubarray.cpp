int Solution::solve(vector<int> &A) {
    int ans=0,n = A.size(),i;
    int cnt;
    for(i=0;i<n;i+=2)
    {
        cnt = (n-i)*(i) + (n-i);
        if(cnt&1)ans^=A[i];
    }
    return ans;
}
