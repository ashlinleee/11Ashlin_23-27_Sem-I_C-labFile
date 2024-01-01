#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str) {
int length = str.length();
for (int i = 0; i < length / 2; ++i) {
if (str[i] != str[length - 1 - i]) {
// Characters don't match, not a palindrome
return false;
}
}
return true;
}
int main() {
string input;
cout << "Enter a string: ";
getline(cin, input);
if (isPalindrome(input)) {
cout << "The given string is a palindrome.\n";
}
else{
cout << "The given string is not a palindrome.\n";
}
return 0;
}