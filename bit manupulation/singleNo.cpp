int Solution::singleNumber(const vector<int> &A) {
    if(A.size()==0)return 0;
    int xorA = A[0];
    for(int i=1;i<A.size();++i)
    {
        xorA^=A[i];
    }
    return xorA;
}
