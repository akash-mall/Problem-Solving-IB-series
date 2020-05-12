vector<int> Solution::primesum(int A) {


    vector<bool> sieve(A,0);

    sieve[0]=1;
    sieve[1]=1;
    for(int i=2;i<(A);i++)
    {
        if(sieve[i]==0)
        {
            for(int j = i*2;j<A;j+=i)
            {
                sieve[j]=1;
            }
        }
    }
    vector<int> ans;
    for(int i=2;i<(A);i++)
    {
        if(sieve[i]==0)
        {
            if(sieve[A-i]==0)
            {
                ans.push_back(i);
                ans.push_back(A-i);
                break;
            }
        }
    }
    return ans;
}
