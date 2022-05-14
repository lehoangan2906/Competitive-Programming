#include <bits/stdc++.h>

using namespace std;

vector<int> subsetSums(int arr[], vector<int> fn, int l, int r, int sum = 0){

	if (l > r) {
        //cout << sum << " ";
        fn.insert(fn.begin(), sum);
		return fn;
	}

	subsetSums(arr, fn, l + 1, r, sum + arr[l]);

	subsetSums(arr, fn, l + 1, r, sum);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    vector<int> fn;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

	subsetSums(arr, fn, 0, n - 1);

	return 0;
}
