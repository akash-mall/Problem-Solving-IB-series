int Solution::findMinXor(vector<int> &A) {
    int n,ans=INT_MAX;
    n = A.size();
    sort(A.begin(),A.end());
    int smallest = A[0]^A[1];
    for(int i=2;i<n;++i)
    {
        smallest = min(smallest,smallest^A[i-1]);
    }
    return smallest;
}
