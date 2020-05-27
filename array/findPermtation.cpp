vector<int> Solution::findPerm(const string A, int B) {
    vector<int>ans(B);
    for(int i=1;i<=B;++i)
    {
        ans[i-1]=i;
    }
    for(int i=0;i<A.size();++i)
    {
        if(A[i]=='I') continue;
        else{
            int j=i;
            while(j>=0 && A[j]=='D')
            {
                swap(ans[j],ans[j+1]);
                j--;
            }
        }
    }
    return ans;
}
