// maximum sum sub-array of size k

#include<bits/stdc++.h>
using namespace std;


int bruteForceMethod(vector<int>v, int n, int k)
{
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i ++)
    {
        int sum = 0;

        for(int j = 0; j <k && j < n; j++)
        {
            sum += v[j];
        }

        maxSum = max(sum, maxSum);
    }
    return maxSum;
}


int constantSlidingWindow(vector<int>v,int n,int k)
{
    int maxSum = 0;
    for(int i = 0; i < k; i++)
    {
        maxSum += v[i];
    }

    int sum = maxSum;
    int i = 1, j = k;
    while(j < n)
    {
        sum += v[j]; // go to right side
        sum -= v[i]; // deduct from left side
        i ++; j ++;
        maxSum = max(sum, maxSum);
    }

    return maxSum;
}
int main()
{
    int n,k; cin >> n >>k;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // cout << bruteForceMethod(v,n,k);
    cout << constantSlidingWindow(v,n,k);

    return 0;
    
}