int Solution::isPalindrome(int A) {
    int digit=0,temp = A;
    int ans=0;
    if(A<0) return 0;
    while(temp)
    {
        digit++;
        temp/=10;
    }
    //stack<int> st;
    temp =A;

    int i;
    for(i=0;i<digit/2;i++)
    {
        ans-=(temp%10);
        temp/=10;
    }

    if(digit%2!=0){ temp/=10;
    i++;
    }
    int f=0;
    for(;i<digit;i++)
    {
        ans+=(temp%10);
        temp/=10;
    }
    if(ans!=0) return 0;
    return 1;

}
