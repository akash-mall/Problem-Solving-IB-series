#include<bits/stdc++.h>
using namespace std;

int mod = 1000003;
long long int fact(int n) 
{ 
    if (n == 0) 
    return 1; 
    return (n * fact(n - 1))%mod; 
}
int solve(string A)
{
   string b=A;
    int n = A.size();
    sort(b.begin(),b.end());
    long long int ans = 1;
    for(int i=0;i<n;i++)
    {
        int j = b.find(A[i]);
        ans=((ans+(j*(fact(n-i-1))%mod))%mod);
        b.erase(b.begin()+j);
    }
    return ans;
}




int main()
{
    string s;
    cin>>s;
    cout<<solve(s);
}