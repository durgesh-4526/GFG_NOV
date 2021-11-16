#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        unordered_map<char,int> m;
        for (int i = 0;i<a.size();i++)
        {
            m[a[i]]++;
        }

        for (int i = 0; i < b.size(); i++)
        {
            if (m[b[i]] > 0)
            {
                m[b[i]]--;
            }else{
                return false;
            }
            
        }return true;
        
        
        
        
    }

};
int main()
{
    
    return 0;
}