/*
    Có n môn học, môn thư si sẽ có Ci chương. Devu mong muốn học hết tất cả các môn học.
    Ở môn đầu tiên Devu học trong x giờ, Nhưng sau khi học xong môn đầu tiên môn tiếp theo
    cậu sẽ học nhanh hơn bình thương 1 giờ. Tuy vậy, mỗi chương Devu vẫn cần ít nhất 1 giờ
    để học qua các chương.

    Nhiệm vụ của bạn là tính thời gian tối thiểu mà Devu cần để học xong n môn học đã cho.
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll selfLearning(vector<int>& subjects, int x){
    sort(subjects.begin(), subjects.end());
    ll min_time = 0;

    for (int subject : subjects){
        min_time += 1LL * subject * x;
        if (x > 1){
            x--;
        }
    }
    return min_time;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> subjects(n);

    for(int i = 0; i < n; i++){
        cin >> subjects[i];
    }

    ll result = selfLearning(subjects, x);
    cout << result;

    return 0;
}
