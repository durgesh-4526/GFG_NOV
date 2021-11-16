#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m)
{
    unordered_map<int,int> ma;
    for (int i = 0; i < n; i++)
    {
        ma[a1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if( ma[a2[i]] != 0){
             ma[a2[i]]--;
        }else{
            return "No";
        }
    }return "Yes";
    
}
int main()
{
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};
    int n = 6;
    int m = 4;
    isSubset(a1, a2, n, m);
    return 0;
}