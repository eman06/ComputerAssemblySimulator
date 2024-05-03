#include "NetworkCard.h"
NetworkCard::NetworkCard() : type(""), speed(0), price(0.0) {}
std::string NetworkCard::gettype() {
    return type;
}
void NetworkCard::settype(std::string t) {
    type = t;
}
int NetworkCard::getspeed() {
    return speed;
}
void NetworkCard::setspeed(int s) {
    speed = s;
}
double NetworkCard::getprice() {
    return price;
}
void NetworkCard::setprice(double p) {
    price = p;
}