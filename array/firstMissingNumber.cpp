int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();

    for(int i=0;i<n;++i)
    {
        if(A[i]<=0 || A[i]>n)continue;
        if(A[i]==(i+1)) continue;
        if(A[A[i]-1]==A[i])continue;
        swap(A[A[i]-1],A[i]);
        i--;
    }
    int i;
    for( i=0;i<n;++i)
    {
        if(A[i]!=(i+1))
        return i+1;
    }
    return n+1;
}
