#include <iostream>
using namespace std;
int main(){
int n1=5;
for (int i = 1; i <= n1; i++){
for (int j = i; j <= (2*i)-1; j++){
cout << j;
}
for (int j = (2*i)-2; j >=i; j--){
cout << j;
}
cout << endl;
}
for (int i = n1 - 1; i >= 1; i--){
for (int j = i; j <= 2*i - 1; j++){
cout << j;
}
for (int j = (2*i)-2; j >=i; j--){
cout << j;
}
cout << endl;
}
return 0;
}