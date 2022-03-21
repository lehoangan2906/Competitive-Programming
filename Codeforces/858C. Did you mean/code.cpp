#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // a word is typed with a typo if there is a
    // block of not less than three consonants in 
    // a row and there are at least two different 
    // letters in this block
    //
    // consonants are: A, E, I, O, U
    


    string word;
    cin >> word;

    int a[26];
    memset(a, 0, sizeof(word));

    int n = word.length();

    char ch[] = {'a', 'e', 'i', 'o', 'u'};;
    queue<int> q;

    int i = 0;
    while(true){
        set<char> sx;

        if (i + 2 >= n){
            break;
        }

        sx.insert(word[i]);
        sx.insert(word[i + 1]);
        sx.insert(word[i + 2]);

        int k = 0;
        for (int j = 0; j < 5; j++){
            if (ch[j] == word[i] || ch[j] == word[i + 1] || ch[j] == word[i + 2])
                k++;
        }
        
        // space
        if (k == 0 && sx.size() > 1){
            q.push(i + 1);
            i = i + 2;
        }else{
            i++;
        }
    }

    for (i = 0; i < n; i++){
        cout << word[i];
        if (q.size()){
            if ( i == q.front()){
                cout << ' ', q.pop();
            }
        }
    }


    return 0;
}
