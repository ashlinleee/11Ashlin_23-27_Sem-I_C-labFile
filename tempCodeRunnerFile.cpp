#include <iostream>
using namespace std;
const int MAX_PRODUCTS = 100;
const int MAX_CART_SIZE = 10;
class Product {
private:
string name;
double price;
int quantityInStock;
public:
Product(string n, double prc, int qty)
: name(n), price(prc), quantityInStock(qty) {}
string getName() const { return name; }
double getPrice() const { return price; }
int getQuantityInStock() { return quantityInStock; }
void displayDetails() const {
cout << "Product: " << name << "\tPrice: $" << price << "\tQuantity in Stock: " <<
quantityInStock << endl;
}
};
class ShoppingCart {
private:
Product* cart[MAX_CART_SIZE];
int cartSize;
public:
ShoppingCart() : cartSize(0) {}
void addProduct(Product* product) {
if (cartSize < MAX_CART_SIZE && product->getQuantityInStock() > 0) {
cart[cartSize++] = product;
cout << product->getName() << " added to the cart.\n";
} else {
cout << "Cannot add more products to the cart.\n";
}
}
double calculateTotalCost() {
double totalCost = 0;
for (int i = 0; i < cartSize; ++i) {
totalCost += cart[i]->getPrice();
}
return totalCost;
}
void displayCartContents() {
cout << "Shopping Cart Contents:\n";
for (int i = 0; i < cartSize; ++i) {
cart[i]->displayDetails();
}
cout << "--------------------------\n";
cout << "Total Cost: $" << calculateTotalCost() << endl;
}
};
int main() {
Product product1("Apple", 5.99, 50);
Product product2("Banana", 4.99, 100);
Product product3("Carrot", 3.99, 12);
ShoppingCart cart;
cart.addProduct(&product1);
cart.addProduct(&product2);
cart.addProduct(&product3);
cart.displayCartContents();
return 0;
}