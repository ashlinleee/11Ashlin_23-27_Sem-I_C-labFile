#include <iostream>
using namespace std;
int main() {
double base, exponent;
cout << "Enter the base: ";
cin >> base;
cout << "Enter the exponent: ";
cin >> exponent;
long long int result = 1;
for (int i = 0; i < exponent; ++i) {
result *= base;
}
cout << base << " raised to the power " << exponent << " is: " << result << endl;
return 0;
}