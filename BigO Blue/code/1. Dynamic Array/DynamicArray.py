# Dynamic Array (Mảng động) là cấu trức dữ liệu dùng để lưu trữ các đối
# tượng có kích thước không xác định. Khác với mang tĩnh, người dùng
# không cần phải khai báo trước số lượng phần tử khi sử dụng.

# Khởi tạo dynamic array
variable = []

# thêm phần tử
variable.append(5)
variable.append(7)
variable.append(8)
variable.append(3)
variable.append(6)

# chèn giá trị vào dynamic array -- insert(pos, obj)
variable.insert(2, 9)

# lấy kích thước của dymnamic array -- len(obj)
n = len(variable)

print(n)

# truy cập phần tử trong dynamic array -- using []
result = variable[2]

print(result)

# xoá phần tử cuối khỏi dynamic array -- pop()
variable.pop()

# xoá phần tử ở vị trí bất kỳ trong dynamic array -- pop(pos)
variable.pop(2)

# xoá toàn bộ phần tử trong dynamic array -- clear()
variable.clear()

# tăng kích thước của dynamic array (ta nối thêm list mới vào list hiện tại)  -- extend(list)
variable.extend(2*[0])

# giảm kích thước của dynamic array -- using slicing
variable = variable[0: 2]

# traverse
# xuôi
for i in range(len(variable)):
    print(variable[i], end = ', ')

# ngược
for i in range(len(variable) - 1, -1, -1):
    print(variable[i], end = ', ')


