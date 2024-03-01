#include "Product.h"

Product::Product(const std::string& productName, const std::string& productType, double productVolumeLiters)
    : name(productName), type(productType), volumeLiters(productVolumeLiters) {}

std::string Product::getName() const {
    return name;
}

std::string Product::getType() const {
    return type;
}

double Product::getVolumeLiters() const {
    return volumeLiters;
}

void Product::setName(const std::string& newName) {
    name = newName;
}

void Product::setType(const std::string& newType) {
    type = newType;
}

void Product::setVolumeLiters(double newVolume) {
    volumeLiters = newVolume;
}