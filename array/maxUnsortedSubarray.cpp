vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size(),maxm=-1;
    int start = n,end = -1;
    vector<int> maxInd(n,0);
    for(int i=1;i<n;++i)maxInd[i] = i;

    for(int i=1;i<n;++i)
    {
        int j=i-1;
        if(A[j]>maxm)maxm = A[j];
        while(j>=0)
        {
            if(maxInd[j]==j){
                if(A[j]>A[i]){
                    maxInd[i] = j;
                    j--;

                }
                else{
                    break;
                }
            }
            else{
                if(A[i]<maxm){
                maxInd[i]=maxInd[j];
                j=maxInd[j];
                }
                else{
                    break;
                }
            }
        }
    }
    vector<int>ans;

    int i = n-1;
    while(i>=0){
        if(maxInd[i]!=i)
        {
            end = max(end,i);
            start = min(start,maxInd[i]);
            i = maxInd[i];
        }
        else i--;
    }
    if(end==-1)ans.push_back(-1);
    else{
        ans.push_back(start);
        ans.push_back(end);
    }
    return ans;
}
