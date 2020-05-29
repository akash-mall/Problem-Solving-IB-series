int comb(int n,int r)
{
     long long prod = 1, divd = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            prod *= n;
            divd *= r;

            long long common = __gcd(prod, divd);
            prod /= common;
            divd /= common;

            n--;
            r--;
        }
    }
    else
        prod = 1;
    return (int)prod;
}

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    if(A==0)return ans;
    vector<int>temp;
    temp.push_back(1);
    ans.push_back(temp);
    if(A==1) return ans;
    for(int i=1;i<A;++i)
    {
        temp.clear();
        for(int j=0;j<=i;++j)
        {
            temp.push_back(comb(i,j));
        }
        ans.push_back(temp);
    }
    return ans;
}
