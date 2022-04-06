//
// Created by Kacper Murygin on 05/04/2022.
//
#include <string>
#include "catch.hh"
#include "../product.h"
//Playlist(string Name, string Author, string DateCreated, string DateModified, vector<string> Songs, double TotalTime)
TEST_CASE("product simple tests", "[product]")
{
    int Volume = 10;
    int NumberLot = 202;
    string Name = "milk";
    vector<string> Components = {"sugar", "fat"};
    Product product_milk(Volume, NumberLot, Name, Components);
    product_milk.getProducer().setName("Mlekovita");
    product_milk.getProducer().setAddress("Warszawa", "02-497", "Błękitna", 23);
    CHECK(product_milk.getName() == "milk");

    SECTION("changing element values"){
        product_milk.setName("milk2");
        product_milk.setVolume(9);
        product_milk.setNumberLot(222);
        CHECK(product_milk.getName() == "milk2");
        CHECK(product_milk.getVolume() == 9);
        CHECK(product_milk.getNumberLot() == 222);
    }

    SECTION("added element to vector- components"){
        product_milk.addComponent("chocolate");
        product_milk.addComponent("vanilla");
        vector<string> componentss = {"sugar", "fat", "chocolate", "vanilla"};
        CHECK(product_milk.getComponents() == componentss);
    }

    SECTION("removing element from vector- components"){
        product_milk.removeComponent("fat");
        vector<string> componentss = {"sugar"};
        CHECK(product_milk.getComponents() == componentss);
    }

    SECTION("getting index of an component"){
        vector<string> componentss = {"sugar", "fat"};
        CHECK(product_milk.getComponents() == componentss);
        CHECK(product_milk.getIndexOfComponent("fat") == 1);
    }

    SECTION("checking if vector contains a certain component"){
        CHECK(product_milk.checkIfContains("fat") == 1);
        CHECK(product_milk.checkIfContains("cheese") == 0);
    }

    SECTION("modifying components"){
        vector<string> componentss = {"sugar", "fat"};
        CHECK(product_milk.getComponents() == componentss);
        product_milk.modifyComponent("fat", "oil");
        vector<string> componentss2 = {"sugar", "oil"};
        CHECK(product_milk.getComponents() == componentss2);
    }

    SECTION("getting the number of components"){
        CHECK(product_milk.numberOfComponents() == 2);
        product_milk.addComponent("chocolate");
        product_milk.addComponent("vanilla");
        CHECK(product_milk.numberOfComponents() == 4);
    }

}