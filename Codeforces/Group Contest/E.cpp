// C++ program to find hamming distance b/w
// two string
#include<bits/stdc++.h>
using namespace std;

// function to calculate Hamming distance
int hamming(char *str1, char *str2)
{
	int i = 0, count = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			count++;
		i++;
	}
	return count;
}

// driver code
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<string> arr[n];

    while(n--){
        char str[k];
        cin >> str;
        arr->insert(arr->begin(), str);
        //cout << hammingDist(str1, str2) << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            char c1[];
             strcpy(arr[i].c_str(), c1);
            cout << hamming(str1, str2) << endl;
        }
    }

	return 0;
}
