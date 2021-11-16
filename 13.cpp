#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool ispar(string x)
    {
        stack<char> a;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '{' || x[i] == '(' || x[i] == '[')
            {
                a.push(x[i]);
            }
            else
            {
                if (x[i] == '}' && a.top() == '{')
                {
                    a.pop();
                }
                else if (x[i] == ']' && a.top() == '[')
                {
                    a.pop();
                }
                else if (x[i] == ')')
                {
                    a.pop();
                }
            }
        }
        return a.size() == 0;
    }
};
int main()
{

    return 0;
}