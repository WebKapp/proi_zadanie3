//
// Created by Kacper Murygin on 01/04/2022.
//
#include <iostream>
#include "product.h"
#include "date.h"
#include "producer.h"
#include "component.h"
#include "file.h"
#include <fstream>
using namespace std;
int main() {
    //Product(int Volume, int NumberLot, string Name, vector<Component> Components, Date ExpirationDate, Producer Producer);
    //Product(int Volume, int NumberLot, string Name, vector<Component> Components);
    string fileName;
    fileName = "products_test.txt";
    File File1(fileName);
    vector <Product> products = File1.readFile();
    cout << products.size() << endl;
    Date date1(1,January,2022);
    Producer producer1("Bakoma", "Warszawa", "Marszałkowska", "02-342", 12);
    Component component1("milk", 30);
    Component component2("sugar", 40);
    Component component3("lactose", 50);
    Component component4("gluten", 20);
    vector<Component> components;
    Product product1(20, 333, "Milk",components, date1, producer1);
    product1.addComponent(component1);
    cout << product1;
    product1++;
    cout << product1;
    product1--;
    cout << product1;
    return 0;
}
