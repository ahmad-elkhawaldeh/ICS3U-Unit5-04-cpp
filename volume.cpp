// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program calculates the volume of cylinder


#include <iostream>
#include <math.h>

float volume_cylinder(float raduis, float Height) {
// return volume

    float volume;
    volume = 3.14 * pow(raduis, 2) * Height;
    return volume;
}

int main() {
    float raduis_2;
    float Height_2;
    float area, volume;
    std::string Height;
    std::string raduis;

    std::cout << "Enter raduis: ";
    std::cin >> raduis;
    std::cout << "Enter height: ";
    std::cin >> Height;

    try {
        raduis_2 = std::stof(raduis);
        Height_2 = std::stof(Height);
        volume = volume_cylinder(raduis_2, Height_2);
    }
    catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
    std::cout << "The cylinder volume is: " << volume << std::endl;
}
