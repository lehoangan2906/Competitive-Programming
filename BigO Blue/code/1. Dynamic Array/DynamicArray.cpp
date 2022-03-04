// Dynamic Array (mảng động) là cấu trúc dữ liệu dùng để lưu trữ các đối tượng có kích thước không xác định.
// Khác với mảng tĩnh, người dùng không cần phải khai báo trước số lượng phần tử khi sử dụng.

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    // thêm phần tử
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(3);
    v.push_back(6);

    // chèn giá trị -- insert (iterator, val)
    vector<int>::iterator it;
    it = v.begin() + 2;
    v.insert(it, 9);

    // lấy kích thước -- size()
    int n = v.size();
    cout << n << "\n";

    // truy cập phần tử -- using []
    int result = v[2];
    cout << result << "\n";

    // truy cập để thay đổi giá trị -- using []
    v[4] = 9;

    // xoá phần tử cuối -- pop_back()
    v.pop_back();

    // xoá phần tử ở vị trí bất kỳ -- erase(iterator)
    vector<int>::iterator a;
    a = v.begin() + 2;
    v.erase(a);

    // xoá toàn bộ các phần tử trong dynamic array -- clear()
    v.clear();

    // tăng kích thước của dynamic array -- resize()
    v.resize(7);

    // giảm kích thước của dynamic array -- resize()
    v.resize(2);
    
    // kiểm tra xem dynamic array có rỗng không -- empty()
    if (v.empty() == true)
        cout << "DA is empty";
    else
        cout << "DA is not empty";

    // traverse
    // xuôi
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ", ";
    }

    vector<int>::iterator ik;
    for(ik = v.begin(); ik != v.end(); ik++){
        cout << *ik << ", ";
    }

    // ngược
    for (int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << ", ";
    }

    vector<int>::reverse_iterator j;
    for (j = v.rbegin(); j != v.rend(); j++){
        cout << *j << ", ";
    }


}
