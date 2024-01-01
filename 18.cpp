#include <iostream>
using namespace std;
class Calculator{
public:
double add(double a, double b) {
return a + b;
}
double subtract(double a, double b) {
return a - b;
}
double multiply(double a, double b) {
return a * b;
}
double divide(double a, double b) {
if (b != 0) {
return a / b;
} else {
cout << "Error: Division by zero.\n";
return 0;
}
}
double modulus(int a, int b){
if (b == 0) {
cout << "Error: Cannot find the remainder of division by zero.\n";
return 0;
}
else{
return a % b;
}
}
};
int main()
{
Calculator calculator;
double num1, num2;
char operation;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter operation (+, -, *, /, %): ";
cin >> operation;
switch (operation) {
case '+':
cout << "Result: " << calculator.add(num1, num2) << endl;
break;
case '-':
cout << "Result: " << calculator.subtract(num1, num2) << endl;
break;
case '*':
cout << "Result: " << calculator.multiply(num1, num2) << endl;
break;
case '/':
cout << "Result: " << calculator.divide(num1, num2) << endl;
break;
case '%':
cout << "Result: " << calculator.modulus(num1, num2) << endl;
break;
default:
cout << "Invalid operation.\n";
break;
}
return 0;
}