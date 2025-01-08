#include<bits/stdc++.h>
using namespace std;

int countSetBit(string s)
{
    int count = 0 ;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1') count ++;
    }

    return count;
}

bool isPossible(string a, string b)
{
    for(int i = 0; i < a.length(); i++)
    {
        if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    
    int test; cin >> test;


    while(test --)
    {
        int n;  cin >> n;
        string a,b; cin >> a  >> b;

        int count1 = countSetBit(a);
        int count2 = countSetBit(b);

        if(count1 % 2 != 0 || count2 % 2 != 0 )
        {
            cout << "YES\n";
             
        }
        else{
            (isPossible(a,b))? cout << "YES\n": cout << "NO\n";
            // cout << "from else blcck\n";
        }

    }
    return 0;
}