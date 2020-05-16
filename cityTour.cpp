int factMat[1000000];
long int mod = 1000000007;
long int fact(long int f)
{
    if(factMat[f]!=0){
        return factMat[f];
    }
    factMat[f]= ((fact(f-1)%mod)*(f%mod))%mod;
    return factMat[f];
}

long int power(long int f,long int m)
{
    if(m==0) return 1;
    if(m%2==0)
    {long int res = power(f,m/2)%mod;
        return ((res%mod)*(res%mod))%mod;
    }
    else
    return ((f%mod)*(power(f,m-1)%mod))%mod;
}

long int inv(long int f)
{
    if(f==1) return 1;
    long int ret = power(f,mod-2);
    return ret%mod;
}

long int permutate(vector<long int> &mc,long int x,long int y,long int A)
{
     long int ans = ((fact(A)%mod)*inv((fact(x)%mod)*(fact(y)%mod))%mod)%mod;
     long int mmi = 1;
     for(int i=0;i<mc.size();++i)
     {
         mmi = ((mmi%mod)*(fact(mc[i])%mod))%mod;
         if(mc[i]!=0)
         ans = ((ans%mod)*(power(2,mc[i]-1)%mod))%mod;
     }
     ans = ((ans%mod)*(inv(mmi)%mod))%mod;
     return ans%mod;
}

int Solution::solve(int A, vector<int> &B) {

    sort(B.begin(),B.end());
   // for(int i=0;i<B.size();++i)cout<<B[i]<<" ";
   // cout<<endl;

    factMat[0]=1;
    factMat[1]=1;
    factMat[2]=2;
    long int k = B[0]-1,l = B.size();
    long int m = A - B[l-1];

    vector<long int> midCnt;
    long int cnt=0;
    for(int i=1,j=1;i<l;i++)
    {
        cnt = (long int)(B[i]-B[i-1]-1);
        midCnt.push_back(cnt);
    }

    long int ans = permutate(midCnt,k,m,(long int)A-l);
 //   for(int i=0;i<midCnt.size();++i) cout<<midCnt[i]<<" ";
    return int(ans%mod);
}
