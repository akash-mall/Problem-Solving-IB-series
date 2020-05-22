bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());

    int m = arrive.size();
    int i = 1,j=0;
    int curr = 1,maxm = 1;
    while(i<m && j<m)
    {
        if(arrive[i]<depart[j])
        {
            curr++;
            if(curr>maxm){
                maxm = curr;
                if(maxm>K) return false;
            }
            i++;
        }
        else{
            curr--;
            j++;
        }
    }
    return true;
}
