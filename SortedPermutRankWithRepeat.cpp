int mod = 1000003;
long long int fact(int n)
{
    if (n == 0)
    return 1;
    return (n * fact(n - 1))%mod;
}

long long int power(long long int a,long long int b)
{
    if(a==0) return 0;
    if(b==0) return 1;
    long long int result;
    if(b%2==0)
    {
        result = power(a,b/2)%mod;
        return (result*result)%mod;
    }
    else{
        result = a%mod;
        return (result*power(a,b-1)%mod)%mod;
    }
}
int Solution::findRank(string s) {

//baa"
    int cnt=0;
   int l = s.size();
   int ans = 0;
   for(int i=0;i<l;++i)
   {
       cnt=0;
       map<char,int> mp;
       mp[s[i]]++;
       for(int j= i+1;j<l;++j)
       {
           if(s[j]<s[i]) cnt++;
           mp[s[j]]++;
       }
       int d=1;
       for(auto a:mp){
           d = (d*fact(a.second))%mod;
       }
       ans = (ans+((cnt%mod) * ((fact(l-i-1)%mod))*(power(d,mod-2)%mod))%mod)%mod;

   }
   return (ans+1)%mod;
}
