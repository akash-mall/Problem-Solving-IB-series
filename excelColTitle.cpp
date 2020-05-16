string Solution::convertToTitle(int A) {
    string ans="";
    while(A)
    {
        int temp = (A-1)%26;
        ans+=((char)((temp)+int('A')));
        if((A%26)==0) A-=26;
        A/=26;

    }
    reverse(ans.begin(),ans.end());
    return ans;
}
