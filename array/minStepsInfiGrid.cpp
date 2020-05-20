int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int absx,absy,prevx=A[0],prevy=B[0];
    int minSteps = 0;
    for(int i=1;i<A.size();++i)
    {
        absx = abs(A[i]-prevx);
        absy = abs(B[i]-prevy);
        int minm = min(absx,absy);
        minSteps+=(minm+(absx+absy-(2*minm)));
        prevx = A[i];
        prevy = B[i];
    }
    return minSteps;
}
