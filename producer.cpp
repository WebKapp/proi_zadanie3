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

int Producer::getNumber() {
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

void Producer::setNumber(int newNumber) {
    number = newNumber;
}

Producer::Producer(string Name, string City, string Street, string PostCode, int Number) {
    name = Name;
    city = City;
    street = Street;
    postCode = PostCode;
    number = Number;
}

Producer::Producer() {
    name = "";
    city = "";
    street = "";
    postCode = "";
    number = 0;
}

void Producer::setAddress(string newCity, string newStreet, string newPostCode, int newNumber) {
    city = newCity;
    postCode = newPostCode;
    street = newStreet;
    number = newNumber;
}
