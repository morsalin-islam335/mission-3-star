// // objective: convert a (string) to b(string) with minimum cost if possible otherwise print -1
// #include<bits/stdc++.h>
// using namespace std;

// void result(string a, string b)
// {
//     if(a.length() < b.length())
//     {
//         cout << -1 << "\n";
//         return;
//     }


//     // apply sliding window
//     int i = 0, j = 0, k;
//     int sum = 0; 

//     while(a.length() > b.length())
//     {
//         if(a[i] == b[j])
//         {
//             // slide right side
//             i ++;
//         }
//         else
//         {
//             k = i;
//             char delChar = a[i];
//             while(k > 0 && a[k] == delChar) // reduce index to minimize cost
//             {
//                 k --;
//             }

//             a.erase(k,1);
//             sum += k + 1; // increase lowest index as possible

//             if(a[i] == b[j]) j++; //increase j and go to right side
//         }
//     }

//     cout << sum << "\n";
// }


// int main()
// {
//     int test; cin >> test;
//     while(test --)
//     {
//         string a,b; cin >> a >> b;
//         result(a,b);
//     }

//     return 0;
    
// }


#include <bits/stdc++.h>
using namespace std;

void result(string a, string b) {
    int n = a.length(), m = b.length();

    if (n < m) {
        cout << -1 << "\n";
        return;
    }

    // Step 1: Find the leftmost occurrence of each character in `b` within `a`
    vector<int> left(m, -1);
    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] == b[j]) {
            left[j] = i;
            j++;
        }
    }

    // If we couldn't match all of `b` in `a`, it's impossible
    if (j < m) {
        cout << -1 << "\n";
        return;
    }

    // Step 2: Find the rightmost occurrence of each character in `b` within `a`
    vector<int> right(m, -1);
    j = m - 1;
    for (int i = n - 1; i >= 0 && j >= 0; i--) {
        if (a[i] == b[j]) {
            right[j] = i;
            j--;
        }
    }

    // Step 3: Compute the minimum deletion cost
    int minCost = INT_MAX;

    // Option 1: Remove all characters before the first match
    minCost = min(minCost, left[0]);

    // Option 2: Remove all characters after the last match
    minCost = min(minCost, (n - right[m - 1] - 1));

    // Option 3: Remove characters between two matches
    for (int i = 1; i < m; i++) {
        minCost = min(minCost, right[i] - left[i - 1] - 1);
    }

    // Convert to 1-based deletion cost
    cout << minCost + 1 << "\n";
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        string a, b;
        cin >> a >> b;
        result(a, b);
    }
    return 0;
}
