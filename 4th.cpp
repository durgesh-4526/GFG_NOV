#include <bits/stdc++.h>
using namespace std;
bool find4Numbers(int a[], int n, int X)
{   
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int l = j+1,r = n-1;
            while (l<r)
            {
                if(a[i]+a[j]+a[l]+a[r]== X)return 1;
                else if(a[i]+a[j]+a[l]+a[r] < X)l++;
                else{
                    r++;
                }
            }
            
        }
    }return 0;
    
    
}
int main()
{
    int a[] = {1,4,2,6,3,8,5,9};
    int n = 8;
    int x = 20;
    cout<<find4Numbers(a,n,x);
    // find4Numbers(a,n,x);
    return 0;
}