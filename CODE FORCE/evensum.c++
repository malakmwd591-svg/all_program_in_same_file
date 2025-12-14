#include <iostream>
using namespace std;

void SumEven(int matrix[10][10], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] % 2 == 0) {
                sum += matrix[i][j];
            }
        }
    }
    cout << "Sum of even numbers: " << sum << "\n";
}

int main() {
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int matrix[10][10];

    cout << "Enter the numbers:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    SumEven(matrix, r, c);

    return 0;
}
