// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 8/01/2025
// Cost of a pizza

#include <iostream>
#include <iomanip>

int main() {
    // Constants
    const float LABOUR_COST = 2.00;
    const float RENT_COST = 2.25;
    const float MATERIAL_COST_PER_INCH = 1.50;
    const float HST_RATE = 0.13;

    float diameter;
    std::cout << "Enter the diameter of the pizza (in inches): ";
    std::cin >> diameter;

    // Calculate subtotal
    float subtotal = LABOUR_COST + RENT_COST + MATERIAL_COST_PER_INCH * diameter;
    // Calculate tax
    float tax = subtotal * HST_RATE;
    // Calculate total
    float total = subtotal + tax;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total cost of the pizza is: $" << total << std::endl;

}
