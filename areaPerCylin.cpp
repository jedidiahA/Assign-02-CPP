// Copyright (c) 2021 Jedidiah All rights reserved.
// 
// Created by: Jedidiah
// Created on: Dec. 6, 2021
// This program asks the user for the Radius
// and Height of a cylinder. It then calculates
// and displays the area and perimeter.
#include <iostream>
#include <cmath>

// declare variables
float radius, height, area, volume;

int main() {
  // get input from user
  std::cout << "We will calculate the area and\n";
  std::cout << "perimeter of a cylinder.\n";
  std::cout << "Enter the Radius (cm): ";
  std::cin >> radius;
  std::cout << "Enter the Height (cm): ";
  std::cin >> height;

  // calculate area and perimeter
  area = 2 * M_PI* radius * height + 2 * M_PI * pow(radius, 2) ;
  volume = M_PI * pow(radius, 2) * height;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area << " cm^2.\n";
  std::cout << "Perimeter = " << volume << "cm.\n";
}
