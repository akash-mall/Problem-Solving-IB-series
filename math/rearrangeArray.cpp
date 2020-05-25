void Solution::arrange(vector<int> &A) {
    int n = A.size();
    if(n==0) return;

    for(int i=0;i<n;i++)
    {
        A[i] = A[i]+(A[A[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
    {
        A[i]/=n;
    }
}
