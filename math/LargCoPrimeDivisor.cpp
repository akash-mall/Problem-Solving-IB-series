#include<bits/stdc++.h>
using namespace std;

int solve(int A,int B)
{
    for(int i=1;i*i<=A;++i)
    {
        if(A%i==0){
        if(__gcd(B,A/i)==1) return A/i;
        }
    }

}

int main()
{
    int A, B;
    cin>>A>>B;

    cout<<solve(A,B);
}