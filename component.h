//
// Created by Kacper Murygin on 06/04/2022.
//

#ifndef ZADANIE3_COMPONENT_H
#define ZADANIE3_COMPONENT_H
#include <string>
using namespace std;
class Component{
private:
    string name;
    int percentage;
public:
    Component();
    Component(string Name, int Percentage);
    string getName();
    int getPercentage();

    void setName(string newName);
    void setPercentage(int newPercentage);
};
#endif //ZADANIE3_COMPONENT_H
