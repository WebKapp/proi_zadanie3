//
// Created by Kacper Murygin on 01/04/2022.
//
#include <iostream>
#include "product.h"
#include "date.h"
#include "producer.h"
#include "component.h"

using namespace std;
int main() {
    int Volume = 10;
    int NumberLot = 202;
    string Name = "milk";
    vector<Component> Components;
    Product product1(Volume, NumberLot, Name, Components);
    cout << product1.getVolume() << endl;
    cout << product1.getName() << endl;
    Component sugar("sugar", 40);
    Component vanilla("vanilla", 60);
    Component sugar2("sugar", 20);
    product1.addComponent(sugar);
    cout << product1.getComponent("sugar").getPercentage() << endl;
    product1.addComponent(sugar2);
    product1.addComponent(vanilla);
    cout << product1.getComponent("sugar").getPercentage() << endl;

    Date ExpirationDate(10,January,2024);
    // Producer::Producer(string Name, string City, string Street, int PostCode, int Number) {
    Producer Producer("Bakoma", "Warsaw", "Chmielna", "02-495", 4 );
    Product product2(Volume, NumberLot, Name, Components, ExpirationDate, Producer);
    cout << ExpirationDate;
    cout << product2.getProducer().getName() << endl;

    product1++;
    Component brownie("brownie", 30);
    Component pancakes("pancakes", 20);
    Component gluten("gluten", 80);

    product1.addComponent(brownie);
    product1.addComponent(pancakes);
    product1.addComponent(gluten);
    cout << product1.getVolume() << endl;
    cout << product1;

    cout<<"\n";
    product1.sortComponentsName();
    cout << product1;
    cout<<"\n";
    product1.sortComponentsPercentage();
    cout << product1;
    return 0;
}
