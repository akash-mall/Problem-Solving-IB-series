/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {

    Interval merge;
    vector<Interval> ans;

    int n = intervals.size(),f=0;
    // if start of newInterval is greater than end
    if(newInterval.start>newInterval.end)
    {
        swap(&newInterval.start,&newInterval.end);
    }

    //if size of intervals is zero or the new interval is to be inserted at start without merging
    if(n==0 || newInterval.end<intervals[0].start){
        ans.push_back(newInterval);
        f=1;
    }

    //rest cases
    for(int i=0;i<n;++i)
    {
        //if current interval is not in the range of new Interval
        if((intervals[i].end < newInterval.start) || f==1)
        {
            ans.push_back(intervals[i]);
            continue;
        }
        // if its in range and its in the range for the first time
        else if(f!=2){
            //set start of merge
            merge.start = min(intervals[i].start,newInterval.start);
            //new Interval is completely between two existing intervals
            if(newInterval.end<intervals[i].start)
            {
                merge.end = newInterval.end;
                ans.push_back(merge);
                f=1;
                ans.push_back(intervals[i]);
                continue;
            }
            else f=2;
        }
        //waiting for end to be found
        if(f==2){
            //if current interval is between the new interval don't add to answer
            if(newInterval.end > intervals[i].end){
                continue;
            }
            else
            {
                //if newInterval end is not in between some range
                if(newInterval.end < intervals[i].start){
                    merge.end = newInterval.end;
                    ans.push_back(merge);
                    ans.push_back(intervals[i]);
                }
                // if newInterval end is between some range
                else{
                    merge.end = max(intervals[i].end,newInterval.end);
                    ans.push_back(merge);
                }
                f=1;
            }
        }
    }
    //no place found till now for new interval
    if(f!=1)
    {
        //if start is found... end = newInterval.end
        if(f==2)
        {
            merge.end = newInterval.end;
            ans.push_back(merge);
        }
        //if start not found add newInterval to last
        else{
            ans.push_back(newInterval);
        }

    }

    return ans;
}
