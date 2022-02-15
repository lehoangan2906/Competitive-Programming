#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;           
    cin >> t;
    while(t--){
        int m, n, k, x, y; 
        scanf("%d%d%d", &n, &m, &k);
        x = min(n/k, m); 
        m -= x;
        k -= 1;
        y = (m - 1 + k)/k;
        cout << x - y << endl;
    }

    return 0;
}


/*
idea: we have 2 possible cases: the number of jokers in the deck exceed the number of cards each player have, and the number of jokers in the deck is less than the number of cards each player have

    - Case 1: the number of jokers in the deck exceed the number of cards each player have:
            + One player can have at most (n/k) jokers. The remaining jokers (m - (n / k)) are divided to (k - 1) players.
            + Calculate the maximum Joker that one of the remaining player can have ((m - 1 + k) / k). This is (m - k) rounding up.
            + The maximum Score One can have is: (n/k) - (the maximum Joker that one of the remaining player can have)


    - Case 2: the number of jokers in the deck if less than the number of cards each player have:
            + One player can have at most (m) jokers. The remaining jokers (m - m) are divided to (k - 1) players.
            + Calculate the maximum Joker that one of the remaining player can have ((m - 1 + k) / k) = 0. This is (m - k) rounding up.
            + The maximum score One can have is: (m) - 0 = m

So to be sure which case we have depends on the input, we need to find the minimum value of (n/k) and m.
*/