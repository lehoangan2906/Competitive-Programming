#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
#define mp make_pair 
#define s second

vector<pair<int, int> > a, b;           // A pair is a container which stores two values mapped to each other, and a vector containing multiple number of such pairs is called a vector of pairs.

int main(){

    ios_base::sync_with_stdio(0);

    int x, y, n;             
    cin >> n;                         
    while(n--){
        cin >> x >> y;               
        if(x < 0) a.pb(mp(x, y));       
        else b.pb(mp(x, y));       
    }

    sort(a.begin(), a.end(), greater<pair<int, int> >());        
    sort(b.begin(), b.end());

    int max = 0;                               
    if(a.size() == b.size()){               
        for(int i = 0; i < a.size(); i++)
            max += a[i].s + b[i].s;            
    }

    else if(a.size() > b.size()){                
            for(int i = 0; i < b.size(); i++)
                max += a[i].s + b[i].s;
                max += a[b.size()].s;
    }

    else{                                         
        for(int i = 0; i < a.size(); i++)
            max += a[i].s + b[i].s;
            max += b[a.size()].s;
    }

    cout << max;
    return 0;
}


/* conclusion:  first, we need to define two vectors of pairs to hold the positions of trees and the number of apples on these trees
                second, we take n, x, y (number of trees in Lala Land, position of these trees, number of apples on these trees) as input
                third, we split these trees into 2 halves base on the values of x (lines 19, 20)
                fourth, we need to sort members of a and b in greater pair order.

                Let's divide all the trees into two different groups, trees with a positive position and trees with a negative position. Now There are mainly two cases:
                
                If the sizes of the two groups are equal. Then we can get all the apples no matter which direction we choose at first.
                
                If the size of one group is larger than the other. Then the optimal solution is to go to the direction of the group with the larger size. If the size of the group with the smaller size is m then we can get apples from all the m apple trees in it, and from the first m + 1 trees in the other group.
                
                So we can sort each group of trees by the absolute value of the trees position and calculate the answer as mentioned above.*/
