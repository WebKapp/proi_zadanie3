//
// Created by Kacper Murygin on 05/04/2022.
//
#include <string>
#include "catch.hh"
#include "../product.h"
//Playlist(string Name, string Author, string DateCreated, string DateModified, vector<string> Songs, double TotalTime)
TEST_CASE("playlist simple tests", "[playlist]")
{
    int Volume = 10;
    int NumberLot = 202;
    string Name = "milk";
    vector<string> Components = {"sugar", "milk"};
    Product product(Volume, NumberLot, Name, Components);
    CHECK(product.getName() == "milk");
}