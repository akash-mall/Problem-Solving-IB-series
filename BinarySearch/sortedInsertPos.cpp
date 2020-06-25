int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size();
    int s =0,e = n;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(A[mid]==B)return mid;
        else if(A[mid]<B)s=mid+1;
        else e=mid-1;
    }
    if(A[s]>B)return s;
    if(A[s]<B)return s+1;
}
