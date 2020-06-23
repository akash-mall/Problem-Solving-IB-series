long long check(long long mid,int k,vector<int> &c)
{
    long long ans=1,sum=0,maxm=0;
    for(int i=0;i<c.size();++i)
    {
        if(sum+c[i]>mid){
            ans++;
            if(ans>k)return -1;
            maxm = max(maxm,sum);
            sum=c[i];
        }
        else{
            sum+=c[i];
        }
    }
    maxm = max(maxm,sum);
    return maxm;
}

int Solution::paint(int a, int b, vector<int> &c) {
    long mod = 10000003;
    int n = c.size();
    if(n==1)return (b%mod*c[0]%mod)%mod;
    long long end = 0;
    long long start = -1;
    for(int i=0;i<n;++i)
    {
        end+=(c[i]);
        if(c[i]>start)start = c[i];
    }
    long long ans=1000000000001,ret;
    while(start<=end)
    {
        long long mid = start+(end-start)/2;
        ret = check(mid,a,c);
        if((int)ret==-1)start=mid+1;
        else{
            end = mid-1;
            ans = ret;
        }
    }
    ans = ((ans%mod)*(b%mod))%mod;
    return (int)ans;
    
}
