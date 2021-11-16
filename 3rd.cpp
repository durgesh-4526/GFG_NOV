#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int Maximize(int a[],int n)
    {
       sort(a,a+n);
       int64_t sum = 0, mod = 1e9 + 7;
       for (int i = 0; i < n; i++)
       {
           (sum += 1LL * i * a[i]) %= mod;
       }
    //   sum = sum%od;
       return sum ;
    }
};
int main()
{
    
    return 0;
}