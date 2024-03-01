#pragma once
#include <string>

class Product {
private:
    std::string name;
    std::string type;
    double volumeLiters;

public:
    Product(const std::string& productName, const std::string& productType, double productVolumeLiters);

    std::string getName() const;
    std::string getType() const;
    double getVolumeLiters() const;

    void setName(const std::string& newName);
    void setType(const std::string& newType);
    void setVolumeLiters(double newVolume);
};

