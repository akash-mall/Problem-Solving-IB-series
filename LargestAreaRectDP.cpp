int Solution::solve(vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();

    for(int i=0;i<n;++i)
    {
        int cnt=0;
        for(int j=0;j<m;++j)
        {

            if(A[j][i]==0)
                cnt=0;
            else{
                cnt++;
            }
            A[j][i]=cnt;
        }
    }

    for(int i=0;i<m;++i)
    {
        sort(A[i].begin(),A[i].end());
    }

        int maxm = 0;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            maxm = max(maxm,A[i][j]*(n-j));
        }
    }

    return maxm;
}
