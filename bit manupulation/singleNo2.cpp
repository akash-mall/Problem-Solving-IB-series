int Solution::singleNumber(const vector<int> &A) {

    int n = A.size();
    int ans = 0;
    int powr;
    for(int i=0;i<32;++i)
    {
        int cnt=0;
        powr = pow(2,i);
        for(int i=0;i<n;++i)
        {
            if(A[i]&powr)cnt++;
        }
        if(cnt%3!=0)ans+=powr;
    }
    return ans;
}
