#include <bits/stdc++.h>
using namespace std;
int countRev(string s)
{
    if (s.size() & 1)
    {
        return -1;
    }
    int close = 0, open = 0;
    for (auto &a : s)
    {
        if (a == '{')
        {
            open++;
        }
        else if (open == 0 && a == '}')
        {
            close++;
        }
        else
        {
            open--;
        }
    }
    return (open + 1) / 2 + (close + 1) / 2;
}
int main()
{
    string s = "{{}{{{}{{}}{{";
    cout<<countRev(s);
    return 0;
}