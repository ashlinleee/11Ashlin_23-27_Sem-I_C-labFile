#include <iostream>
using namespace std;
int main() {
int rows, cols;
cout << "Enter the number of rows: ";
cin >> rows;
cout << "Enter the number of columns: ";
cin >> cols;
int matrix[rows][cols];
cout << "Enter the elements of the matrix:\n";
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << "Element [" << i << "][" << j << "]: ";
cin >> matrix[i][j];
}
}
cout << "\nSum of elements in each row:\n";
for (int i = 0; i < rows; ++i) {
int sum = 0;
for (int j = 0; j < cols; ++j) {
sum += matrix[i][j];
}
cout << "Sum of elements in row " << i + 1 << ": " << sum << endl;
}
return 0;
}