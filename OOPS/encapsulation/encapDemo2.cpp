/*
<=========================================================================================>
QUESTION 3 — PRODUCT MANAGEMENT SYSTEM ==> Create a C++ program to manage products in a shop.
Requirements:
*1. Create a class Product with private data members:
   - productId
   - productName
   - price
   - quantity

*2. Use a parameterized constructor to initialize product details.

*3. Create an inline function:
   inline double getTotalPrice(); ==>    It should return:    price × quantity

*4. Apply encapsulation:
   - All data members must be private.
   - Create getter functions to access required information.
   - Create a setter for price.
   - The setter should reject a negative price.

*5. Create a static data member:
   static int productCount;
   It should count the number of Product objects created.

*6. Create a static member function:
   static void showProductCount();

*7. Create a friend function:
   friend void compareProducts(Product, Product);
   It should compare the total price of two products and display which product has the greater total value.

* 8. Create a destructor that displays:
   Product <productName> destroyed

*9. In main():
   - Create at least 3 Product objects.
   - Display their product details.
   - Display total price for each product.
   - Change the price of one product using the setter.
   - Compare two products using the friend function.
   - Display the total number of products using the static function.

<=========================================================================================>
*/
#include <iostream>
using namespace std;

class Product
{

    int productId;
    string productName;
    double price;
    int quantity;
    static int productCount;

public:
    // * Parameterized constructor
    Product(int productId, string productName, double price, int quantity)
    {
        this->productId = productId;
        this->productName = productName;
        this->price = price;
        this->quantity = quantity;
        productCount++;
        cout << "product " << productCount << " created successfully\n"
             << endl;
    }

    // * setter for price
    void setPrice(double price)
    {
        if (price < 0)
        {
            cout << "Price should not be negative" << endl
                 << endl;
        }
        else
        {
            this->price = price;
            cout << "Price set Successfully.." << endl
                 << endl;
        }
    }

    // * inline functions
    inline double getTotalPrice()
    {
        return (price * quantity);
    }

    // * getter functions
    int getProductId()
    {
        return productId;
    }

    string getProductName()
    {
        return productName;
    }

    double getProductPrice()
    {
        return price;
    }

    int getProductQuantity()
    {
        return quantity;
    }

    // * static function
    static int showProductCount()
    {
        return productCount;
    }

    void getProductDetails()
    {
        cout << "Product Id : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Product Price : " << price << endl;
        cout << "Product Quantity : " << quantity << endl
             << endl;
    }

    // * destructor
    ~Product()
    {
        cout << productName << " destroyed" << endl;
    }

    // * friend function
    friend void compareProduct(Product, Product);
};

void compareProduct(Product a, Product b)
{
    cout << a.getProductName() << " : " << a.getTotalPrice() << "\t" << b.getProductName() << " : " << b.getTotalPrice() << endl;

    if (a.getTotalPrice() < b.getTotalPrice())
    {
        cout << b.getProductName() << " has Higher price then " << a.getProductName() << endl;
    }
    else
    {
        cout << a.getProductName() << " has Higher price then " << b.getProductName() << endl;
    }
}

int Product ::productCount = 0;

int main()
{
    Product car(001, "BMW", 5000000, 1);
    Product bike(002, "GT", 500000, 1);
    Product ac(003, "AC", 90000, 2);

    // * product details
    car.getProductDetails();
    bike.getProductDetails();
    ac.getProductDetails();

    // * each product price
    cout << "Car Total Price : " << car.getTotalPrice() << endl;
    cout << "Bike Total Price : " << bike.getTotalPrice() << endl;
    cout << "Ac Total Price : " << ac.getTotalPrice() << endl
         << endl;

    bike.setPrice(67000);
    bike.setPrice(-67000);

    // * comparison using friend function
    compareProduct(bike, car);
    compareProduct(ac, bike);

    cout << "\nProduct Count : " << Product::showProductCount() << endl;

    return 0;
}