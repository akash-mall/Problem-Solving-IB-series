long check(long mid,vector<int> &arr,int b)
{
    long sum=0,k=1,maxm=0;
    for(int i=0;i<arr.size();++i)
    {
        if(sum+arr[i]>mid)
        {
            k++;
            if(k>b)return -1;
            maxm = max(maxm,sum);
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    return max(maxm,sum);
}

int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(n<B)return -1;
    long sum = 0,maxPage=0;
    for(int i=0;i<n;++i)
    {
        sum+=(A[i]);
        maxPage = max(maxPage,(long)A[i]);
    }
    if(B==1) return sum;
    if(B==n)return maxPage;
    long s = maxPage,e = sum,ans=0;
    while(s<=e)
    {
        long mid = s+(e-s)/2;
        long ret = check(mid,A,B);
        if(ret==-1){
            s= mid+1;
        }
        else{
            e=mid-1;
            if(ret!=-2)
            ans = mid;
        }
    }
    return ans==0?-1:ans;
    
    
}
