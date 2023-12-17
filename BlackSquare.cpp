#include <bits/stdc++.h>

// https://codeforces.com/contest/431/problem/A

using namespace std;
int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string line;
    cin >> line;

    int answer = 0;

    for (char x : line)
    {
        switch (x)
        {
        case '1':
            answer += a;
            break;
        case '2':
            answer += b;
            break;
        case '3':
            answer += c;
            break;
        case '4':
            answer += d;
            break;
        default:
            break;
        }
    }

    cout << answer;
}