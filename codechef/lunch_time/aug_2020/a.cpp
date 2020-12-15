/*
Author : ahampriymax_elehu
Problem:ansFREQ
Contest: LTIME87B
Platform: Codechef
Time: 29-Aug-2020 21:47
Quote:"Dogs are always in push up position"
Problem Statement:   
Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment.

There are N numbers in a list A=A1,A2,…,AN. Chef needs to find the ans of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one.

More formally, for every v such that there exists at least one i such that Ai=v, find the number of j such that Aj=v, and call that the frequency of v, denoted by freq(v). Then find the value w such that freq(v)=w for the most number of vs considered in the previous step. If there are multiple values w which satisfy this, output the smallest among them.

As you are one of Chef's friends, help him complete the assignment.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll i, j, test, A, N, K;

void solve()
{
    cin >> N;
    vector<ll> arr(N);
    vector<ll> vec;
    map<ll, ll> mp;
    map<ll, ll> mpmp;
    int freq = INT_MIN;
    int max_ele = 0;
    int ans = INT_MIN;

    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < N; i++)
    {
        mp[arr[i]]++;
    }

    for (auto ele : mp)
    {
        vec.push_back(ele.second);
    }

    for (auto i : vec)
    {
        mpmp[vec[i]]++;
    }

    for (auto ele : mpmp)
    {
        max_ele = ele.second;
        if (max_ele > freq)
        {
            freq = max_ele;
            ans = ele.first;
        }
        else if (max_ele == freq && ans > ele.first)
        {
            ans = ele.first;
        }
    }
    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        solve();
    }
}