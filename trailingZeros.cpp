int Solution::trailingZeroes(int A) {

    int ans=0;
    int temp = A;
    while(temp){
        ans+=(temp/5);
        temp/=5;
    }
    return ans;
}
