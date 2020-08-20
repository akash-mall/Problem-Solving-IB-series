int Solution::divide(int A, int B) {
    if( B==0 || (A==INT_MIN && B==-1))return INT_MAX;
    if(B==1)return A;
    int flag = 1; long tA,tB;
    if(A<0 && B<0){
        tA = abs(long(A));
        tB = abs(long(B));
        
    }
    else if(A<0 || B<0){
        flag = -1;
        tA = abs(long(A));
        tB = abs(long(B));
    }
    else{
        tA = A;
        tB = B;
    }
    if(tB>tA || tA==0)return 0;
    if(tB==tA)return 1;
    long ans=0,temp=tB,cnt=0;
    while(temp<tA)
    {
        temp = temp<<1;
        cnt++;
    }
    ans=1;
    if(temp!=tA)cnt--;
    while(cnt--){
        ans=ans<<1;
    }
    
    if(temp==tA)return ans*flag;
    temp = temp>>1;
    if(tA-temp>=tB)return (ans+divide(tA-temp,tB))*flag;
    return ans*flag;
    
}
