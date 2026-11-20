#include <iostream>
#include <string>

// 1. Define the class template using the 'template' keyword
template <typename T> 
class Box {
private:
    T data; // T acts as a placeholder for whatever data type you choose later

public:
    // Constructor
    Box(T value) : data(value) {}

    // Getter method
    T getData() {
        return data;
    }

    // Setter method
    void setData(T value) {
        data = value;
    }
};

int main() {
    // 2. Instantiate a Box for integers
    Box<int> intBox(123);
    std::cout << "Integer Box contains: " << intBox.getData() << std::endl;

    // 3. Instantiate a Box for strings
    Box<std::string> stringBox("Hello C++ Templates!");
    std::cout << "String Box contains: " << stringBox.getData() << std::endl;

    // 4. Instantiate a Box for doubles
    Box<double> doubleBox(45.67);
    doubleBox.setData(99.99); // Changing the value
    std::cout << "Double Box contains: " << doubleBox.getData() << std::endl;

    return 0;
}
