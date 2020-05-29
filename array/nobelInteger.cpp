int Solution::solve(vector<int> &A) {
    map<int,int> mp;
    int l = A.size();
    for(int i=0;i<l;++i)
    {
        mp[A[i]]++;
    }
    map<int,int> :: iterator it;
    int i=0;
    for(it = mp.begin(); it!=mp.end();++it)
    {
        i+=(it->second);
        if(it->first == (l-i)){
            return 1;
        }
    }
    return -1;
}
