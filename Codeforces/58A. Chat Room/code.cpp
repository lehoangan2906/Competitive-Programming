/* Solution is greedy algorithm. The first thing we do is find in our string the first letter 'h'. 
Then we find letter 'e' which is righter that found 'h'. If we find the whole word 'hello' in such 
way, obliviously, answer is YES.
Now let's prove that if answer exists, we find it. Let see on position of the 'h' in right answer. 
If we move it to the first 'h' in our string, nothing changes. But now we can say that our greedy 
algorithm correctly Now let's do such with the second letter, and so on.
We have greedy algorithm with work time O(n), where n - length of the input.*/


#include <bits/stdc++.h>
using namespace std;

string a, b = "hello";
int j = 0, pas = 0;

int main(){
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        if(a[i] == b[j]){
            j++;
            pas++;
            if(pas == 5){
                break;
            }
        }
    }if (pas == 5){
        cout << "YES";
    } else{
        cout << "NO";
    }

return 0;
}