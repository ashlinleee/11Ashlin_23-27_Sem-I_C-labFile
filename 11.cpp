#include <iostream>
using namespace std;
bool isAscending(const int arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
if (arr[i] > arr[i + 1]) {
return false;
}
}
return true;
}
int main() {
int size;
cout << "Enter the size of the array: ";
cin >> size;
int arr[size];
cout << "Enter the elements of the array:\n";
for (int i = 0; i < size; ++i) {
cout << "Element " << i + 1 << ": ";
cin >> arr[i];
}
if (isAscending(arr, size)) {
cout << "The array is in ascending order.\n";
} else {
cout << "The array is not in ascending order.\n";
}
return 0;
}