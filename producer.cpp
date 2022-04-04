//
// Created by Kacper Murygin on 01/04/2022.
//

#include "producer.h"
using namespace std;

string Producer::getName() {
    return name;
}

string Producer::getCity() {
    return city;
}

string Producer::getPostCode() {
    return postCode;
}

string Producer::getStreet() {
    return street;
}

string Producer::getNumber() {
    return number;
}

//string Producer::getFullAddress() {
//    return std::string();
//}

void Producer::setName(string newName) {
    name = newName;
}

void Producer::setCity(string newCity) {
    city = newCity;
}

void Producer::setPostCode(string newPostCode) {
    postCode = newPostCode;
}

void Producer::setStreet(string newStreet) {
    street = newStreet;
}

void Producer::setNumber(string newNumber) {
    number = newNumber;
}

Producer::Producer(string Name, string City) {
    name = Name;
    city = City;
}

Producer::Producer() {
    name = "";
    city = "";
    street = "";
    postCode = "";
    number = "";
}
