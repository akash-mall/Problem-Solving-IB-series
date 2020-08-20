int findPivot(const vector<int> &A)
{
    int n = A.size();
    int s = 0,e=n-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(A[mid]<A[mid-1])
        {
            return mid;
        }
        else if(A[mid]>A[mid-1] && A[mid]<A[0])e = mid-1;
        else s=mid+1;
    }
    return s;
}
int binSearch(vector<int> A, int s,int e,int B)
{
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(A[mid]==B)return mid;
        else if(A[mid]>B)e=mid-1;
        else s=mid+1;
    }
    return -1;
}
int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    int pivot=-1;
    if(A[0]<=A[n-1])pivot=0;
    else pivot = findPivot(A);

    int a = binSearch(A,0,pivot,B);
    int b = binSearch(A,pivot,n,B);
    if(a!=-1 || b!=-1)
    return a==-1?b:a;
    else return -1;
}
