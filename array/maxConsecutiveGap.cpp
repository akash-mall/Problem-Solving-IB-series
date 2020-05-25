int Solution::maximumGap(const vector<int> &A) {
    priority_queue<int> pq;
    int l = A.size();
    if(l<2) return 0;

    for(int i=0;i<l;++i)
    {
        pq.push(A[i]);
    }
    int diff = pq.top(),maxdiff = -1,topper;
    pq.pop();
    while(!pq.empty())
    {
        topper = pq.top();
        if((diff-topper)>maxdiff)maxdiff = diff-topper;
        diff = pq.top();
        pq.pop();
    }
    return maxdiff;
}
