#include <iostream>
#include <string>
using namespace std;
void bubbleSort(string arr[], int size) {
for (int i = 0; i < size - 1; ++i) {
for (int j = 0; j < size - i - 1; ++j) {
if (arr[j] > arr[j + 1]) {
string temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
int main() {
int size;
cout << "Enter the size of the array: ";
cin >> size;
string arr[size];
cout << "Enter the elements of the array of strings:\n";
for (int i = 0; i < size; ++i) {
cout << "Element " << i + 1 << ": ";
cin >> arr[i];
}
bubbleSort(arr, size);
cout << "Sorted array in alphabetical order: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}