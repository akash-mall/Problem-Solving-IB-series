vector<int> Solution::flip(string s) {
    int maxm=0;
    int l = s.size();
    vector<int> range;
    vector<int> count(l);

    int cnt=0,j;
    for(int i=0;i<l;++i)
    {
        if(s[i]=='0'){
            if(cnt<0)cnt=0;
            cnt++;
        }
        else cnt--;
        count[i] = cnt;

    }
    for(int i=0;i<l;++i)
    {
        if(count[i]>maxm)
        {
            maxm = count[i];
            int j=i;
            while(j>=0 && count[j]>=0)
            j--;
            j++;
            range.clear();
            range.push_back(j+1);
            range.push_back(i+1);
        }
    }
    return range;
}
