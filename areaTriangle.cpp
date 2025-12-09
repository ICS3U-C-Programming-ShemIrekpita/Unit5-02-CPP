// Created by: Shem
// Created on: 2025/12/8
// This program calculates the area of a triangle.
// Copyright 2025 Shem
#include <iostream>
void area_of_triangle() {
    float base;
    float height;
    // Get the base of the triangle
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    // Get the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    // Calculate the area of the triangle
    float area = 0.5 * base * height;
    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;
}
int main() {
    try {
        area_of_triangle();
    } catch (std::exception) {
        std::cout << "An error occurred." << std::endl;
    }
}
