int Solution::solve(int A) {
    long long ans =0,power;
    long long mod = 1000000007;
    long tA=(unsigned int)(A);
    tA+=1;
    //cout<<tA;
    for(int i=0;i<=31;++i){
        power = pow(2,long(i));
        //cout<<power<<" ";
        if(power>tA)break;
        
        ans+=((((tA/power)/2)%mod*power%mod)%mod);
        if(((tA/power) & 1)!=0){
            ans+=((tA%(power))%mod);
        }
    }
    return ans%mod;
    
}
