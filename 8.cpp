#include <iostream>
using namespace std;
int main() {
int numRows;
cout << "Enter the number of rows for Pascal's Triangle: ";
cin >> numRows;
for (int i = 0; i < numRows; ++i) {
int coefficient = 1;
for (int j = 0; j < numRows - i; ++j) {
cout << " ";
}
for (int j = 0; j <= i; ++j) {
cout << coefficient << " ";
coefficient = coefficient * (i - j) / (j + 1);
}
cout << endl;
}
return 0;
}
