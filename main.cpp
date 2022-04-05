//
// Created by Kacper Murygin on 01/04/2022.
//
#include <iostream>
#include "product.h"
#include "date.h"
#include "producer.h"

using namespace std;
int main() {
    int Volume = 10;
    int NumberLot = 202;
    string Name = "milk";
    vector<string> Components = {"sugar", "milk"};
    Product product(Volume, NumberLot, Name, Components);
    Producer producer("kamil", "Warszawa");
    product.setProducer(producer);
    product++;
    cout << product.getVolume() << endl;
    product--;
    cout << product.getVolume() << endl;
    product--;
    cout << product.getVolume() << endl;

    product.getProducer().setName("Bartek");
    return 0;
}
