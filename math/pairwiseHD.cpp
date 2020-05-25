
int Solution::hammingDistance(const vector<int> &A) {
    int n = A.size();
    long ans=0,x=0,y=0,mod=1000000007;
    if(n<=1) return 0;
    for(int i=0;i<=31;i++)
    {
        x=0,y=0;
        int bit = pow(2,i);
        for(int j=0;j<n;j++)
        {
            if((A[j]&(bit))==0) x++;
            else y++;
            cout<<x<<" "<<y<<endl;
            ans = (ans + (2*x*y)%mod)%mod;
        }
    }
    return (int)ans;
}
