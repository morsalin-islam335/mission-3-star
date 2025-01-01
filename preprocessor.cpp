// some preprocessors
#include <bits/stdc++.h>
using namespace std;

#define forI(i, s, n) for (int i = s; i < n; i++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define PB(VTR, value) VTR.push_back(value)
#define N cout << "\n"
#define SORTA(VTR) sort(VTR.begin(), VTR.end())
#define SORTD(VTR) sort(VTR.begin(), VTR.end(), greater<int>())
#define SORTAL(VTR) sort(VTR.begin(), VTR.end())
#define SORTDL(VTR) sort(VTR.begin(), VTR.end(), greater<long long>())
#define PrintVector(V) { for (int i = 0; i < V.size(); i++) cout << V[i] << " "; }


int main() {
    vector<int> vec = {5, 1, 8, 3, 7};

    // Push elements into the vector
    PB(vec, 10);
    PB(vec, 2);

    // Print the vector
    cout << "Original Vector: ";
    PrintVector(vec);
    N;

    // Sort in ascending order
    SORTA(vec);
    cout << "Sorted Ascending: ";
    PrintVector(vec);
    N;

    // Sort in descending order
    SORTD(vec);
    cout << "Sorted Descending: ";
    PrintVector(vec);
    N;

    // Condition demonstration
    if (vec[0] > 5) {
        YES;
    } else {
        NO;
    }

    return 0;
}
