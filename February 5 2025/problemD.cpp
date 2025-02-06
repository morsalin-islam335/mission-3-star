#include<bits/stdc++.h>
using namespace std;
void result(string a, string b)
{
    int i = 0, j = 0, k;
    int count = 0;

    while(i < a.length() && j < b.length()) 
    {
        if(a.length() < b.length())
        {
            cout << -1 <<"\n";
            return;
        }

        // apply logic
        if(a[i] != b[j])
        {
            k = i;
            char delChar = a[k];
            while(k > 0 && a[k] == delChar) k --;
            a.erase(k, 1); // erase 1 index from kth index

            count += k+1;
            if(a[i] != b[j]) j++; // increment j if both are not same
        }
        else {
            i++;
            
        }
        
    }
    // cout << a << " " << b << "\n";

    cout << count << "\n";
    

}



int main()
{
    int test; cin >> test;
    while(test --)
    {
        string a,b; cin >> a >> b;
        result(a,b);
    }

    return 0;
    
}