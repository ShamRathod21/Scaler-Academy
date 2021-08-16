vector<int> Solution::solve(vector<int> &A) {
   priority_queue<int,vector<int>,greater<int>>q;
    q.push(A[0]);
    q.push(A[1]);
    for(int i = 2 ; i < A.size() ; i++)
    {
        if(q.top() < A[i])
        {
            q.pop();
            q.push(A[i]);
        }
    }
    vector<int>res;
    int a = q.top();
    q.pop();
    int b = q.top();
    q.pop();
    for(auto i : A)
    {
        if(i < a && i < b)
            res.push_back(i);
    }
    return res;
}
