#include <iostream>
#include <cmath>
using namespace std;
int main() {
// Coefficients of the quadratic equation: ax^2 + bx + c = 0
double a, b, c;
// Input coefficients from the user
cout << "Enter coefficient a: ";
cin >> a;
cout << "Enter coefficient b: ";
cin >> b;
cout << "Enter coefficient c: ";
cin >> c;
// Calculating the discriminant
double discriminant = b * b - 4 * a * c;
// Check the value of the discriminant
if (discriminant > 0){
// Calculate two distinct real roots
double root1 = (-b + sqrt(discriminant)) / (2 * a);
double root2 = (-b - sqrt(discriminant)) / (2 * a);
cout << "Root 1: " << root1 << endl;
cout << "Root 2: " << root2 << endl;
}
else if (discriminant == 0){
// Calculating the single real root
double root = -b / (2 * a);
cout << "The equation has a single real root: " << root << endl;
}
else{
// Calculating imaginary part
double imaginaryPart = sqrt(abs(discriminant)) / (2 * a);
cout << "Root 1: " << -b / (2 * a) << " + " << imaginaryPart << "i" << endl;
cout << "Root 2: " << -b / (2 * a) << " - " << imaginaryPart << "i" << endl;
}
return 0;
}