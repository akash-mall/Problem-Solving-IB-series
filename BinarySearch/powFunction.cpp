int Solution::pow(int x, int n, int d) {
    if(n==0) return (1%d);
    if(n==1) return (x%d)<0?d-((x*(-1))%d):(x%d);
    if(n%2==0)
    {
        long k = pow(x,n/2,d)%d;

        long ret = (((k%d)*(k%d))%d);
        return (int)(ret<0?d-ret:ret);
    }
    else{
        long k = pow(x,n-1,d)%d;
        k = ((k%d)*(x%d))%d;

        return (int)(k<0?d-k:k);
    }

 }
