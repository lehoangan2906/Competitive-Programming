/* Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. 
On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. 
Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? 
It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. 
It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.  */

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int main(){
    long long m, n, a, x, y;
    cin >> m >> n >> a;
    if(m%a == 0){
        x = m/a;
    }else{
        x = m/a + 1;
        }
    if(n%a == 0){
        y = n/a;
    }else{
        y = n/a + 1;
        }
    cout << x * y << endl;
    return 0;
}
