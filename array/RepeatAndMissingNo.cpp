vector<int> Solution::repeatedNumber(const vector<int> &A) {

    long long diff=0,sqdiff=0;
    int n = A.size();
    for(int i=0;i<n;++i)
    {
        diff+=A[i];
        diff-=(i+1);
        sqdiff += ((long long)(A[i])*((long long) (A[i])));
        sqdiff -= ((long long)(i+1)*((long long) (i+1)));
    }
    sqdiff = (sqdiff/diff);
    int a = (int)((diff+sqdiff)/2);
    int b = a-(int)diff;
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;

}
