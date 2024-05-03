#include "PowerSupply.h"

PowerSupply::PowerSupply() : wattage(0), efficiencyRating(""), price(0.0) {}

int PowerSupply::getwattage() {
    return wattage;
}
void PowerSupply::setwattage(int w) {
    wattage = w;
}
std::string PowerSupply::getefficiencyrate() {
    return efficiencyRating;
}
void PowerSupply::setefficiencyrate(std::string er) {
    efficiencyRating = er;
}
double PowerSupply::getprice() {
    return price;
}
void PowerSupply::setprice(double p) {
    price = p;
}
