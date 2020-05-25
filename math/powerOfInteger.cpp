int Solution::isPower(int A) {

    if(A==1 || A==0) return A;
    for(int i=2;i*i<=A;++i)
    {
        float b = float(log(A)/log(i));
        if(ceil(b)==floor(b)) return 1;
    }
    return 0;
}
