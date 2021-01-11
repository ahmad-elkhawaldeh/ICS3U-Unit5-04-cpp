// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program calculates the volume of cylinder

#include <iostream>
#include <math.h>

void volume_cylinder(float Height, float raduis) {
   float volume;
   volume = 3.14 * pow(raduis,2) * Height;
   std::cout << "The area of the cylinder is " << (volume)<< " cm² " << std::endl;
}

int main() {
   float raduis_2;
   float Height_2;
   float area;
   std::string Height;
   std::string raduis;

   std::cout << "Enter raduis: ";
   std::cin >> raduis;
   std::cout << "Enter height: ";
   std::cin >> Height;

try {

raduis_2 = std::stof(raduis);
Height_2 = std::stof(Height);
volume_cylinder(raduis_2, Height_2);
}
catch (std::invalid_argument) {
std::cout << "That was not a valid integer" << std::endl;
}
}