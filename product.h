//
// Created by Kacper Murygin on 01/04/2022.
//

#ifndef ZADANIE3_PRODUCT_H
#define ZADANIE3_PRODUCT_H
#include "producer.h"
#include "date.h"
#include <string>
#include <vector>

using namespace std;
class Product{
private:
    int volume;
    int numberLot;
    string name;
    Producer producer;
    Date expirationDate;
    vector<string> components;

public:
    int getVolume();
    int getNumberLot();
    string getName();
    Producer getProducer();
    Date getExpirationDate();

    void setVolume(int newVolume);
    void setNumberLot(int newNumberLot);
    void setName(string newName);
    void setProducer(Producer newProducer);
    void setExpirationDate(Date newExpirationDate);

    vector<string> getComponents();
    bool checkIfContains(string Component);
    int getIndexOfComponent(string Component);
    void addComponent(string newComponent);
    void modifyComponent(string oldComponent, string newComponent);
    void removeComponent(string Component);
    int numberOfComponents();
    void printComponents();
};


#endif //ZADANIE3_PRODUCT_H
