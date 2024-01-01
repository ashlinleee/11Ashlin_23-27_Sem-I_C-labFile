#include <iostream>
#include <string>
using namespace std;
class Product {
private:
int productId;
string productName;
double price;
int quantityInStock;
public:
Product(int id, const string& name, double prc, int qty) {
productId = id;
productName = name;
price = prc;
quantityInStock = qty;
}
void displayProductInfo() const {
cout << "Product ID: " << productId << endl
<< "Product Name: " << productName << endl
<< "Price: $" << price << endl
<< "Quantity in Stock: " << quantityInStock << endl
<< "--------------------------" << endl;
}
};
int main() {
Product product1(101, "Apple", 3.99, 100);
Product product2(102, "Banana", 4.99, 310);
Product product3(103, "Pear", 2.99, 52);
cout << "Inventory Information:\n";
product1.displayProductInfo();
product2.displayProductInfo();
product3.displayProductInfo();
return 0;
}