vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size(),i,ind=-1;
    for(i=n-2;i>=0;--i)
    {
        if(A[i]<A[i+1])
        {
            ind = i;
            break;
        }
    }
    if(ind!=-1){
        int j;
        for(j=ind+1;j<A.size();++j)
        {
            if(A[j]<A[ind])break;
        }
        swap(A[ind],A[j-1]);
    }
    sort(A.begin()+ind+1,A.end());

    return A;
}
