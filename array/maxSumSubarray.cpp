int Solution::maxSubArray(const vector<int> &A) {
    int maxm = INT_MIN;
    int curr = 0;
    int size = A.size();
    for(int i=0;i<size;++i)
    {
        curr = curr+A[i];
        if(curr>maxm) maxm = curr;
        if(curr<0) curr = 0;
    }
    return maxm;
}
