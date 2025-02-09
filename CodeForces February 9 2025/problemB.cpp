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
        
        // {
        //     // if(s[i] == s[j])
        //     // {
        //     //     if( i > 0){ // pointer ka picha nibo
        //     //         s.erase(i,1);
        //     //         // i --;
        //     //         if(j < s.length())
        //     //         {
        //     //             s[j] = s[i];
        //     //         }
        //     //     }
        //     //     else{
        //     //         s.erase(i,1);
        //     //         if(s.length() < j)
        //     //         {
        //     //             s[i] = s[j];
        //     //         }
        //     //     }
        //     // }
        //     // else{
        //     //     i++;
        //     //     j++;
        //     // }
        // }
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
                }
                else{
                    // go to left
                }
            }
            else{
                // pointer ka aga nibo
                i ++;
                j ++;
            }
        }
        // cout << s.length() << "\n";
        cout << s << "\n";
        
    }
    return 0;
}
 