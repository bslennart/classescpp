#include <iostream>

class Product
{
    long barcode;
    std::string name;

public:
    Product() : barcode(0), name("NULL") {};
    Product(long _barcode, std::string _name) : barcode(_barcode), name(_name) {}
    void setCode(long _barcode){
        barcode = _barcode;
    }
    long getCode() {
        return barcode;
    }
    void scanner() {
        std::cout << "Barcode: ";
        std::cin >> barcode;
        std::cout << "Produktname: ";
        std::cin >> name;
    }
    void printer() {
        std::cout << "Barcode: " << barcode << "Produktname: " << name << std::endl;
    }
};

class PackedFood : public Product
{
    double price;

public:
    PackedFood() : price(0), Product() {}
    PackedFood(double _price, long _barcode, std::string _name) : price(_price), Product(_barcode, _name) {}
};

class UnpackedFood : public Product
{
    double weightKG;
    double pricePerKG;

public:
    UnpackedFood() : weightKG(0), pricePerKG(0), Product() {}
    UnpackedFood(double _weightKG, double _pricePerKG, long _barcode, std::string _name) : weightKG(_weightKG), pricePerKG(_pricePerKG), Product(_barcode, _name) {}
};
