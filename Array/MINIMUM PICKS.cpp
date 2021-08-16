int Solution::solve(vector<int> &A) {
    int odd = INT_MAX;
   int even = INT_MIN;
    for(auto i : A)
    {
        if(i%2 == 0)
        {
            if(even < i)
                even = i;
        }
        else
            if(odd > i)
                odd = i;
    }
    return even - odd;
}
