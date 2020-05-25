int Solution::reverse(int A) {
    long rev=0,base=10;
    int neg = A<0?-1:1;
    A*=neg;
    while(A)
    {
        rev*=base;
        rev+=(A%10);
        A/=10;
    }
    rev*=neg;
    if(rev>INT_MAX || rev<INT_MIN) return 0;
    return (int) rev;


}
