int comb(int n,int r)
{
    long p=1,d=1;

    if(r>(n-r))
    {
        r= n-r;
    }
    if(r!=0){
        while(r)
        {
            p*=n;
            d*=r;
            long k = __gcd(p,d);
            p/=k;
            d/=k;
            n--;
            r--;
        }
    }
    else{
        p=1;
    }
    return(int)p;
}
vector<int> Solution::getRow(int A) {
    vector<int> ans;
    for(int i=0;i<=A;++i)
    {
        ans.push_back(comb(A,i));
    }
    return ans;
}
