/*
Author : constusername
Problem: SKMP
Contest: AUG20B
Platform: CodeChef
Problem Statement:
Chef has a string S. He also has another string P, called pattern. He wants to find the pattern in S, but that might be impossible. Therefore, he is willing to reorder the characters of S in such a way that P occurs in the resulting string (an anagram of S) as a substring.

Since this problem was too hard for Chef, he decided to ask you, his genius friend, for help. Can you find the lexicographically smallest anagram of S that contains P as substring?

Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or all) characters from the beginning and several (possibly none or all) characters from the end.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single string S.
The second line contains a single string P.
Output
For each test case, print a single line containing one string ― the smallest anagram of S that contains P.

Constraints
1≤T≤10
1≤|P|≤|S|≤105
S and P contain only lowercase English letters
there is at least one anagram of S that contains P
Subtasks
Subtask #1 (20 points): |S|≤1,000
Subtask #2 (80 points): |S|≤105
Example Input
3
akramkeeanany
aka
supahotboy
bohoty
daehabshatorawy
badawy
Example Output
aaakaeekmnnry
abohotypsu
aabadawyehhorst
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll test, i;
char ch;

void solve(string str, string pattern)
{

    map<char, int> pattern_char, str_char;
    for (i = 0; i < str.size(); i++)
    {
        str_char[str[i]]++;
    }

    for (i = 0; i < pattern.size(); i++)
    {
        pattern_char[pattern[i]]++;
    }

    vector<char> arr;
    for (i = 0; i < str.size(); i++)
    {
        if (str_char[str[i]] > pattern_char[str[i]])
        {
            str_char[str[i]]--;
            arr.emplace_back(str[i]);
        }
    }

    for (i = 0; i < pattern.size(); i++)
    {
        if (pattern[i] != pattern[0])
        {
            ch = pattern[i];
            break;
        }
    }

    string subStr1, subsStr2, subStr3;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] < pattern[0])
            subStr1 += arr[i];
        else if (arr[i] > pattern[0])
            subsStr2 += arr[i];
        else
            subStr3 += arr[i];
    }

    sort(subStr1.begin(), subStr1.end());
    sort(subsStr2.begin(), subsStr2.end());

    if (subStr3[0] <= ch)
    {
        cout << subStr1 + subStr3 + pattern + subsStr2;
    }
    else
    {
        cout << subStr1 + pattern + subStr3 + subsStr2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
        string S, P;
        cin >> S >> P;
        solve(S, P);
        cout << "\n";
    }
}