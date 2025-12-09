// Created by: Shem
// Created on: 2025/12/8
// This program calculates the area of a triangle.
// Copyright 2025 shem

#include <iostream>
#include <stdexcept>

void area_of_triangle() {
    float base;
    float height;
    // Get the base and height of the triangle
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    // Check for invalid input
    if (std::cin.fail()) {
        throw std::runtime_error("Invalid input");
    }
    // Calculate the area of the triangle
    float area = 0.5f * base * height;
    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;
}

int main() {
    try {
        area_of_triangle();
    } catch (...) {
        std::cout << "Invalid input. Please enter numbers only." << std::endl;
    }
}
