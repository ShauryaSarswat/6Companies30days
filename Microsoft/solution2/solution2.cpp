#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
void backtracking(vector<int>& arr,int k,int n,int beg)
{
    if(k==arr.size())
    {
        if(n==0)
        {
            result.push_back(arr);
            return;
        }
    }
    for(int i=beg;i<10;i++)
    {
        arr.push_back(i);
        backtracking(arr,k,n-i,i+1);
        arr.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k,int n)
{
    vector<int> series;
    backtracking(series,k,n,1);
    return result;
}