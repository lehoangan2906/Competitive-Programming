#include <bits/stdc++.h>
using namespace std;
#define maxlength 100

int main(){
    string string1, string2;
    cin >> string1;
    int size = string1.length();

    for (int  i = 0; i < size; i++){
        // if string1[i] is equals to these charaters, continue loop body without doing anything (ignore these characters)
        if(string1[i]=='a'||string1[i]=='e'||string1[i]=='i'||string1[i]=='o'||string1[i]=='u'||string1[i]=='y'||string1[i]=='A'||string1[i]=='E'||string1[i]=='O'||string1[i]=='I'||string1[i]=='U'||string1[i]=='Y'){
            continue;
        }
        else{
            string2 += '.';
            string2 += towlower(string1[i]);
        }
    }
    cout << string2;
    return 0;
}