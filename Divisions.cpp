#include <bits/stdc++.h>

// https://codeforces.com/contest/1669/problem/A

using namespace std;
int main()
{
    int t;
    cin >> t;

    int rating;
    while (t--)
    {
        cin >> rating;

        if (rating <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (rating <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (rating <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }
}