int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size();
    if(n==0) return 0;
    int m = A[0].size();
    if(m==0) return 0;
    int start = 0,end=n*m-1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;

        if(A[mid/m][mid%m]==B)return 1;
        else if(A[mid/m][mid%m]<B)start = mid+1;
        else end = mid-1;
    }
    return 0;
}
