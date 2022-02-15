#include <iostream>
using namespace std;


int32_t main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin) ;
freopen("output.txt", "w", stdout) ;
#endif
ios_base::sync_with_stdio(false);
cin.tie(NULL) ; cout.tie(NULL);
 
int t;
cin >> t;
int a;

while( t-- ) {
    int array[3];
    int count = 0;
    for (int i = 0; i < 3; i++){
        cin >> array[i];
        if(array[i] == 1){
            count += 1;
        }
    }
    if(count >= 2){
        a += 1;
    }
}

cout << a << endl;
return 0;
}