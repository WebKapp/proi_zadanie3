//
// Created by Kacper Murygin on 01/04/2022.
//

#ifndef ZADANIE3_PRODUCER_H
#define ZADANIE3_PRODUCER_H
#include <iostream>
#include <string>
using namespace std;

class Producer {
private:
    string name;
    string city;
    string postCode;
    string street;
    string number;
public:
    string getName();
    string getCity();
    string getPostCode();
    string getStreet();
    string getNumber();
//    string getFullAddress();

    void setName(string newName);
    void setCity(string newCity);
    void setPostCode(string newPostCode);
    void setStreet(string newStreet);
    void setNumber(string newNumber);


};
#endif //ZADANIE3_PRODUCER_H
