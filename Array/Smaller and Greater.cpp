#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public : 
        void input(vector<int>&v)
        {
            int temp;
            int num;
            cin>>num;
            while(num--)
            {
                cin>>temp;
                v.push_back(temp);
            }
        }
        int solve(vector<int>&v);
};
int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int min = A[0];
    int max = A[A.size()-1];
    int num = 0;
    int i = 0;
    for(auto &i : A )
    {
        if(i > min && i < max)
        {
            num++;
        }
    }
    return num;
}
int main()
{
    Solution s;
    vector<int>a;
    s.input(a);
    cout<<s.solve(a);

}
