#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin >> test;
    while(test --)
    {
        string s; cin >>  s;

        int i = 0, j = 1;
        while(i + 1 < s.length())
        
       
        {


            if(s[i] == s[j])
            {
                // case len = 2
                // case erase from forward
                // case erase from backward

                if(s.length() == 2) s.erase(0);
                else if( i == 0)
                {

                    // go to right
                    s.erase(0,1);
                    s[1] = s[0];
                }
                else{
                    // go to left
                    char tmp = s[i];
                    s.erase(i,1);
                    i --; j--;
                    s[i] = tmp;

                }
            }
            else{
                // pointer ka aga nibo
                i ++;
                j ++;
            }
        }
        // cout << s.length() << "\n";
        (s.length())? cout << s.length() << "\n": cout << 1 <<"\n";
        
    }
    return 0;
}
 