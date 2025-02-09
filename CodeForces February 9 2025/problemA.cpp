#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int test;
    cin >> test;
    while(test --)
    {
        string s; cin >> s;
        if(s == "us") cout << "i\n";
        else{
            s = s.erase(s.length()-1,1);
            s = s.erase(s.length() -1,1);
            s += "i";
            cout << s << "\n";
        }
    }
    return 0;
}