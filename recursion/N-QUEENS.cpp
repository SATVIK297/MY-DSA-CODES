#include <iostream>
#include <vector>
using namespace std;
void print_board(vector<int> board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
bool is_valid(vector<int> board, int row, int col) {
    for (int i = 0; i < row; i++) {
        int j = board[i];
        if (j == col || i + j == row + col || i - j == row - col) {
            return false;
        }
    }
    return true;
}
void solve_n_queens(vector<int> board, int row, int &count) {
    int n = board.size();
    if (row == n) {
        count++;
        print_board(board);
        return;
    }
    for (int col = 0; col < n; col++) {
        if (is_valid(board, row, col)) {
            board[row] = col;
            solve_n_queens(board, row + 1, count);
            board[row] = -1;
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;
    vector<int> board(n, -1);
    int count = 0;
    solve_n_queens(board, 0, count);
    cout << "Number of solutions: " << count << endl;
    return 0;
}
