bool myComp(int a,int b)
{
    string s = to_string(a);
    string t = to_string(b);
    if(s+t > t+s) return true;
    else return false;
}
string Solution::largestNumber(const vector<int> &A) {

    int n =A.size();
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        temp.push_back(A[i]);
    }
    string ans="";
    sort(temp.begin(),temp.end(),myComp);
    for(int i=0;i<n;i++)
    {
         string te = to_string(temp[i]);
         ans+=te;
    }
    int j;
    for(j=0;j<ans.size();j++)
    {
        if(ans[j]!='0') break;
    }
    if(j==ans.size()){
        ans.clear();
        ans+="0";
    }
    return ans;
}
