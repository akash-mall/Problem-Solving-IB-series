long int power(int x,int p)
{
    if(p==0) return 1;
    if(p==1) return x;
    if(p%2==0){
        long int res = power(x,p/2);
        return res*res;
    }
    else{
        return x*power(x,p-1);
    }
}
int Solution::solve(vector<int> &A, int B, int C) {
    if(A.size()==0) return 0;
    string strc = to_string(C);
    string stra = "";

    for(int i=0;i<A.size();++i)
    {
        stra+=(to_string(A[i]));
    }

    int l=stra.size();
    int lenc = strc.size();
    //cout<<l<<" "<<lenc;

    if(B>lenc) return 0;
    else if(B<lenc){
        if(A[0]==0)
        {
            int ans = int(power(l,B-1)*(l-1));
            if(B==1) ans++;
            return ans;
        }
        else return int(power(l,B));
    }
    else{
        int ans = 0;
        int f=0;
        for(int i=0;i<l;++i)
        {
            if(stra[i]<strc[0])         // [ 0, 1, 2, 3, 4, 6, 7, 8 ] 5 84999
            {
                if(stra[i]=='0'){
                    if(B==1) ans+=1;
                    continue;
                }
                ans +=(power(l,B-1));
            }
            else if(stra[i]>strc[0]) break;
            else{
                f=1;
                break;
            }
        }
        if(f){
            for(int i=1;i<lenc;++i)
            {
                int j;
                for(j=0;j<l;++j)
                {
                    if(stra[j]<strc[i]) ans+=(power(l,B-1-i));
                    else if(stra[j]>strc[i]){
                        f=0;
                        break;
                    }
                    else{
                        break;
                    }
                }
                if(!f || j==l)break;
            }
        }
        return int(ans);
    }

   // }
    
}
