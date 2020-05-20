vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> ans;
    if(A.size()<1) return ans;
    int carry = 1,size = A.size();

    for(int i = size-1;i>=0;--i)
    {
        ans.push_back((A[i]+carry)%10);
        carry = (A[i]+carry)/10;
    }
    if(carry)ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    int i = 0;
    while(ans[i]==0)
        i++;
    if(i>0)
    ans.erase(ans.begin(),ans.begin()+i);
    return ans;
}
