int Solution::maxArr(vector<int> &A) {

    int l = A.size(),min1,min2,max1,max2;
    min1=min2=INT_MAX,
    max1=max2=INT_MIN;
    for(int i=0;i<l;++i)
    {
        max1 = max1<(A[i]+i)?A[i]+i:max1;
        min1 = min1>(A[i]+i)?A[i]+i:min1;
        max2 = max2<(A[i]-i)?A[i]-i:max2;
        min2 = min2>(A[i]-i)?A[i]-i:min2;
    }
    return max(max1-min1,max2-min2);
}
