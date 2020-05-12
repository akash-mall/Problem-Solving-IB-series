vector<string> Solution::fizzBuzz(int A) {

    vector<string> ans;

    for(int i=1;i<=A;i++)
    {
        if(i%3==0 && i%5==0)
        {
            ans.push_back("FizzBuzz");
        }
        else if(i%3==0) ans.push_back("Fizz");
        else if(i%5==0) ans.push_back("Buzz");
        else {
        string t = to_string(i);
        ans.push_back(t);
        }
    }
    return ans;
}
