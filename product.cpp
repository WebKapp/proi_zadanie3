//
// Created by Kacper Murygin on 01/04/2022.
//

#include "product.h"
#include <string>
using namespace std;

int Product::getVolume() {
    return volume;
}

int Product::getNumberLot() {
    return numberLot;
}

string Product::getName() {
    return name;
}

Producer Product::getProducer() {
    return producer;
}

Date Product::getExpirationDate() {
    return expirationDate;
}

vector<string> Product::getComponents() {
    return components;
}

void Product::setVolume(int newVolume) {
    volume = newVolume;
}

void Product::setNumberLot(int newNumberLot) {
    numberLot = newNumberLot;
}

void Product::setName(string newName) {
    name = newName;
}

void Product::setProducer(Producer newProducer) {
    producer = newProducer;
}

void Product::setExpirationDate(Date newExpirationDate) {
    expirationDate = newExpirationDate;
}


bool Product::checkIfContains(string Component) {
    return (find(components.begin(), components.end(), Component) != components.end());
}

void Product::addComponent(string newComponent) {
    if (not checkIfContains(newComponent)) {
        components.push_back(newComponent);
    }
}

int Product::getIndexOfComponent(string Component){
    for (int i = 0; i < components.size(); i++)
    {
        if (components[i] == Component)
            return i;
    }
}

void Product::modifyComponent(string oldComponent, string newComponent) {
    if (checkIfContains(oldComponent)){
        int index = getIndexOfComponent(oldComponent);
        components.at(index) = newComponent;
    }
}

void Product::removeComponent(string Component) {
    if (checkIfContains(Component)){
        components.erase(remove(components.begin(), components.end(), Component), components.end());
    }
}

int Product::numberOfComponents() {
    return components.size();
}