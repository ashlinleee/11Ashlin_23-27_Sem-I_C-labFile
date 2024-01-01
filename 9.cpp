#include <iostream>
using namespace std;
int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
}
else{
return n * factorial(n - 1);
}
}
int main() {
int N;
cout << "Enter the value of N: ";
cin >> N;
double sum = 0;
for (int i = 1; i <= N; ++i) {
double term = 1.0 * i / factorial(i);
sum += term;
cout << i << "/" << i << "! ";
if (i < N) {
cout << "+ ";
}
}
cout << "\nSum of the series: " << sum << endl;
return 0;
}