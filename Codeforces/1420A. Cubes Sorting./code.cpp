/*
Wheatley decided to try to make a test chamber. He made a nice test chamber, but there was only one detail absent โ cubes.

For completing the chamber Wheatley needs ๐ cubes. ๐-th cube has a volume ๐๐.

Wheatley has to place cubes in such a way that they would be sorted in a non-decreasing order by their volume. Formally, for each ๐>1, ๐๐โ1โค๐๐ must hold.

To achieve his goal, Wheatley can exchange two neighbouring cubes. It means that for any ๐>1 you can exchange cubes on positions ๐โ1 and ๐.

But there is a problem: Wheatley is very impatient. If Wheatley needs more than ๐โ(๐โ1)2โ1 exchange operations, he won't do this boring work.

Wheatly wants to know: can cubes be sorted under this conditions?

Input
Each test contains multiple test cases.

The first line contains one positive integer ๐ก (1โค๐กโค1000), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer ๐ (2โค๐โค5โ104) โ number of cubes.

The second line contains ๐ positive integers ๐๐ (1โค๐๐โค109) โ volumes of cubes.

It is guaranteed that the sum of ๐ over all test cases does not exceed 105.

Output
For each test case, print a word in a single line: "YES" (without quotation marks) if the cubes can be sorted and "NO" (without quotation marks) otherwise.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // to sort a[1], a[2], ..., a[n];
    // number of exchanges == numer of inversions in A == number of pairs (i, j): i < j, a[i] > a[j]
    // max number of inversions in sequence of length n: n * (n - 1) / 2

    // number of pairs (i, j): i < j
    // i = 1, j = 2 --> n: n - 1 pairs
    // i = 2, j = 3 --> n: n - 2 pairs
    //              ...
    // i = n - 1, j = n: 1 pair
    // in total: (n - 1) + (n - 2) + ... + 1 = (n - 1) * n / 2

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] <= a[i + 1]){
                sorted = false;
                break;
            }
        }
        // sorted iff a[1] > a[2] > ... > a[n]
        cout << (sorted ? "NO" : "YES") << "\n";
    }
    return 0;
}
