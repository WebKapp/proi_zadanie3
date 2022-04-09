//
// Created by Kacper Murygin on 06/04/2022.
//

#include "component.h"

string Component::getName() {
    return name;
}

int Component::getPercentage() {
    return percentage;
}

void Component::setName(string newName) {
    name = newName;
}

void Component::setPercentage(int newPercentage) {
    percentage = newPercentage;
}

Component::Component(string Name, int Percentage) {
    name = Name;
    percentage = Percentage;
}

Component::Component() {
    name = "";
    percentage = 0;
}
