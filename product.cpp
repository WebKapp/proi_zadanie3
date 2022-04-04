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
    return 0;
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

//przeciążenia operatorów
Product& Product::operator++()
{
    volume += 1;
    return *this;
}

Product Product::operator++(int)
{
    Product old_value = *this;
    ++(*this); //albo po prostu można wywołać operator++(); ewentualnie jawnie wskazać, że ma być wywołany dla tego obiektu: this -> operator++();
    return old_value;
}

Product& Product::operator--()
{
    volume -= 1;
    return *this;
}

Product Product::operator--(int)
{
    Product old_value = *this;
    --(*this); //albo po prostu można wywołać operator++(); ewentualnie jawnie wskazać, że ma być wywołany dla tego obiektu: this -> operator++();
    return old_value;
}

bool Product::operator>(Product second_argument) const
{
    return volume > second_argument.getVolume();
}

bool Product::operator<(const Product& second_argument) const
{
    return !(*this > second_argument);
}

Product::Product(int Volume, int NumberLot, string Name, vector<string> Components) {
    volume = Volume;
    numberLot = NumberLot;
    name = Name;
    components = Components;
//    expirationDate.setDate(DayExpiration, MonthExpiration, YearExpiration);
//    producer.setName(NameProducer);
}


