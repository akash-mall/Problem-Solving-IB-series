int Solution::sqrt(int A) {
    long s = 1,e = A;
    if(A<=0)return 0;
    while(s<e)
    {
        long mid = s+(e-s)/2;
        if(mid==(A/mid))return (int)mid;
        else if(mid<(A/mid))s = mid+1;
        else e = mid-1;
    }
    return s<=(A/s)?(int)s:(int)(s-1);
}
