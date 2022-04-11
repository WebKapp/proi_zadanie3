//
// Created by Kacper Murygin on 01/04/2022.
//

#include "product.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
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

vector<Component> Product::getComponents() {
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
Component Product::getComponent(string name) {
    if(checkIfContains(name)){
        for(int i=0; i < components.size(); i++){
            if (components.at(i).getName() == name)
                return components.at(i);
        }
    }
    return Component();
}

bool Product::checkIfContains(string checkedComponent) {
    for(int i=0; i < components.size(); i++){
        if (components.at(i).getName() == checkedComponent)
            return true;
    }
    return false;
}

void Product::addComponent(Component& newComponent) {
    if (not checkIfContains(newComponent.getName())) {
        components.push_back(newComponent);
    }
}

int Product::getIndexOfComponent(string name){
    if (checkIfContains(name)) {
        for (int i = 0; i < components.size(); i++)
        {
            if (components[i].getName() == name)
                return i;
        }
    }
    return 0; //check!!!
}

void Product::modifyComponent(Component& oldComponent, Component& newComponent) {
    if (checkIfContains(oldComponent.getName())){
        int index = getIndexOfComponent(oldComponent.getName());
        components.at(index) = newComponent;
    }
}

//void Product::removeComponent(string name) {
//    if (checkIfContains(name)){
//        components.erase(components.begin()+getIndexOfComponent(Component)-1);
//    }
//}

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

Product::Product(int Volume, int NumberLot, string Name, vector<Component> Components) {
    volume = Volume;
    numberLot = NumberLot;
    name = Name;
    components = Components;
//    expirationDate.setDate(DayExpiration, MonthExpiration, YearExpiration);
//    producer.setName(NameProducer);
}

Product::Product(int Volume, int NumberLot, string Name, vector<Component> Components, Date ExpirationDate, Producer Producer) {
    volume = Volume;
    numberLot = NumberLot;
    name = Name;
    components = {};
    producer = Producer;
    expirationDate = ExpirationDate;
}

void Product::sortComponentsName() {

}
void Product::sortComponentsPercentage(){
    std::sort(components.begin(), components.end());
}

ostream& operator<<(ostream& os, const Product& product) {

    os <<"Product:" << product.name << "  volume:" << product.volume<<" nr _lot:"<<product.numberLot;

    os << "{";
//   copy(begin(product.components), end(product.components) - 1,
//       ostream_iterator<Component>(os, "; "));

    // now output the last element (without a trailing "; ")
    if (product.components.size() > 0) {
//        os << product.components.at(product.components.size() - 1) << " ";
        os << product.components.back();
   }
    os << "}";
    return os;
}
