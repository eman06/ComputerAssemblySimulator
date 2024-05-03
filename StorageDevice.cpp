#include "StorageDevice.h"

StorageDevice::StorageDevice() : type(""), capacity(0), price(0.0) {}

std::string StorageDevice::gettype() {
    return type;
}
void StorageDevice::settype(std::string t) {
    type = t;
}
int StorageDevice::getcapacity() {
    return capacity;
}
void StorageDevice::setcapacity(int c) {
    capacity = c;
}
double StorageDevice::getprice() {
    return price;
}
void StorageDevice::setprice(double p) {
    price = p;
}

