int Solution::cntBits(vector<int> &A) {
    long mod =1000000007;
    int n = A.size();
    vector<long> ones(32,0);
    for(int i=0;i<n;++i){
        int temp = A[i];
        for(int i=0;i<32;++i)
        {
            ones[i]+=temp%2;
            temp/=2;
            ones[i]%=mod;
        }
    }
    long ans=0;
    for(int i=0;i<32;++i)
    {
        ans+=(ones[i]%mod*(long(n)-ones[i])%mod)%mod;
    }
    return int((ans*2)%mod);
}