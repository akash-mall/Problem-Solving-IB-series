int Solution::titleToNumber(string A) {
    int n = A.size();
    int ans=0,cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        ans+=(pow(26,cnt)*(A[i]-'A'+1));
        cnt++;
    }
    return ans;
}
