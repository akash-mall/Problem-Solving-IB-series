vector<int> Solution::maxset(vector<int> &A) {

    if(A.size()==0) return {};
    pair<int,int> range;
    vector<int> ans;
    long long int maxm=-1,curr=0,x=0,y=0,f=0;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=0){
            curr+=A[i];
            f=1;
            y = i;
        }
        else{
            if(curr>=maxm){

                if(curr==maxm){
                    if((y-x)>(range.second-range.first))
                        range = {x,y};
                }
                else
                range = {x,y};
                maxm = curr;
            }
            curr=0;
            x=i+1;
            y=i+1;
        }
    }
    if(curr>=maxm){
        if(curr==maxm){
            if((y-x)>(range.second-range.first))
                range = {x,y};
        }
        else
        range = {x,y};
        maxm = curr;
    }
    if(f==0) return ans;
    for(int i=range.first;i<=range.second;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
}
