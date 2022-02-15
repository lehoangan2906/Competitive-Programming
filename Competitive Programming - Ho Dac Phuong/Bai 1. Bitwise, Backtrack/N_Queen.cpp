/*
    The idea is to place queens one by one in different columns, starting from
    the left most column. When we place a queen in a column, we check for clashes
    with already placed queens. In the curent column, if we find a row for which where
    is no clash, we mark this row as safe and place the queen there. If we do not find 
    such a row due to clashes then we backtrack and remove the queen from the current 
    then return false.
*/

/*
Draft: 
- Tạo mảng 2 chiều biểu diễn bàn cờ
- Queen có thể ăn dọc, ngang, hoặc chéo
- Cấu hình bàn cờ size n x n, Có n quân hậu => mỗi cột chỉ có 1 và chỉ 1 quân hậu   
- Tạo mảng check để kiểm tra đã đặt quân hậu hay chưa
- vị trí của các quân hậu là các hoán vị của các column
- vị trí của các quân hậu là các hoán vị của các row
- còn điều kiện về diagonals
=> Viết hàm backtrack để cài đặt các hoán vị của column, hoán vị của row và các hoán vị của diagonals
    + cần có 3 mảng flag để kiểm tra đã đặt quân hậu hay chưa
*/

/*
Thuật:
    1. Bắt đầu ở cột leftmost
    2. Nếu tất cả các quân hậu đã được đặt thì return true
    3. Thử tất cả các row ở column hiện tại
        a) Nếu quân hậu có thể được đặt một cách an toàn vào row đó thì 
        đánh dấu lại [row][column] = true như một phần của đáp án và 
        kiểm tra đệ quy nếu đặt quân hậu ở đó có thể dẫn đến đáp án.
        b) Nếu đặt quân hậu ở [row][column] dẫn đến đáp án thì return true.
        c) Nếu đặt quân hậu ở [row][column] không dẫn đến đáp án thì unmark
        [row][column] (backtrack) sau đó quay lại bước (a) để thử row khác.
    4. Nếu không tìm thấy row nào ở column hiện tại thì return false để 
    kích hoạt backtrack.
*/

#include <bits/stdc++.h>
using namespace std;
#define N 4


void printSolution(int board[N][N]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
}

bool isSafe(int board[N][N], int row, int col){
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++){
        if (board[row][i])
            return false;
    }

    // check lower diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j])
            return false;
    }

    return true;
}

bool solveNQUtil(int board[N][N], int col)
{
    /* base case: If all queens are placed
      then return true */
    if (col >= N)
        return true;

    /* Consider this column and try placing
       this queen in all rows one by one */
    for (int i = 0; i < N; i++) {
        /* Check if the queen can be placed on
          board[i][col] */
        if (isSafe(board, i, col)) {
            /* Place this queen in board[i][col] */
            board[i][col] = 1;

            /* recur to place rest of the queens */
            if (solveNQUtil(board, col + 1))
                return true;

            /* If placing queen in board[i][col]
               doesn't lead to a solution, then
               remove queen from board[i][col] */
            board[i][col] = 0; // BACKTRACK
        }
    }

    /* If the queen cannot be placed in any row in
        this column col then return false */
    return false;
}

// This function solves the N Queen problem using
// Backtracking. It mainly uses solveNQUtil() to
// solve the problem. It returns false if queens cannot
// be placed, otherwise return true and prints placement
// of queens in the form of 1s. Please note that there
// may be more than one solutions, this function prints
// one of the feasible solutions.

bool solveNQ()
{
    int board[N][N] = { {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0},
                        {0, 0, 0, 0} };

    if (solveNQUtil(board, 0) == false){
        printf("Solution does not exist");
        return false;
    }
    printSolution(board);
    return true;
}

int main(){
    solveNQ();
    return 0;
}