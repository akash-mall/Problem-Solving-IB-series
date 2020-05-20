/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool comp(Interval a, Interval b)
 {
     return a.start<=b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    //ensure A is sorted by start time
    sort(A.begin(),A.end(),comp);
    Interval temp;
    vector<Interval> ans;
    int n = A.size();

    if(n==0) return ans;
    //check each interval with temp is its lying inside or outside the temp range
    temp.start = A[0].start;
    temp.end = A[0].end;
    for(int i=1;i<n;++i)
    {
        //current interval lies outside temp range
        if(temp.end < A[i].start)
        {
            ans.push_back(temp);
            temp.start = A[i].start;
            temp.end = A[i].end;
        }
        //current interval lies inside temp range
        else
        {
            temp.end = max(A[i].end,temp.end);
        }
    }
    ans.push_back(temp);
    return ans;
}
