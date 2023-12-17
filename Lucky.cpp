#include <bits/stdc++.h>

// https://codeforces.com/contest/1676/problem/A

using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string line;
        cin >> line;

        int sumOfLast = 0;
        int sumOfFirst = 0;

        for (int i = 0; i < 3; i++)
        {
            sumOfFirst += (int)(line.at(i) - '0');
        }

        for (int i = 3; i < 6; i++)
        {
            sumOfLast += (int)(line.at(i) - '0');
        }

        if (sumOfFirst == sumOfLast)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}