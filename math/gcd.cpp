int Solution::gcd(int A, int B) {

    while(B)
    {
        int t = B;
        B = A%B;
        A = t;
    }
    return A;
}
