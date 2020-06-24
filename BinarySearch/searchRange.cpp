int binary(int start,int end,int B,const vector<int> &A,int f)
{
    int s,e,n=A.size();
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(A[mid]==B){
            if(f==0){
                if(mid!=0 && A[mid]==A[mid-1]){
                    s = binary(start,mid-1,B,A,0);
                    s=s==-1?mid:s;
                    return s;
                }
                else {
                    return mid;
                }
            }
            else{
                if(mid!=n-1 && A[mid]==A[mid+1]){
                    e = binary(mid+1,end,B,A,1);
                    e = e==-1?mid:e;
                    return e;
                }
                else
                    return mid;
            }
        }
        else if(A[mid]<B)start = mid+1;
        else end = mid-1;
    }
    return -1;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    int start=0,end = n-1,s,e;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(A[mid]==B){
            if(mid!=0 && A[mid]==A[mid-1]){
                s = binary(start,mid-1,B,A,0);
                s=s==-1?mid:s;
            }
            else
                s = mid;
            if(mid!=n-1 && A[mid]==A[mid+1]){
                e = binary(mid+1,end,B,A,1);
                e=e==-1?mid:e;
            }
            else
                e = mid;
            return {s,e};
        }
        else if(A[mid]<B)start = mid+1;
        else end = mid-1;
    }
    return {-1,-1};
}
