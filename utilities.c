#include<stdio.h>
#include<stdlib.h>
#include "utilities.h"

void Calculator() {
    int choice;
    float result, a, b;

    printf("\n---Calculator---\n\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            result = add(a, b);
            break;
        case 2:
            result = subtract(a, b);
            break;
        case 3:
            result = multiply(a, b);
            break;
        case 4:
            if (b == 0) {
                printf("\nError: Division by zero!\n\n");
                return;
            }
            result = divide(a, b);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice!\n\n");
            return;
    }

    printf("\nResult: %.2f\n\n", result);
}

void Converter() {
    int choice;
    float result, a;

    printf("\n---Converter---\n\n");
    printf("1. Meter to Kilometer\n");
    printf("2. Kilometer to Meter\n");
    printf("3. Gram to Kilogram\n");
    printf("4. Kilogram to Gram\n");
    printf("5. Celcius to Fahrenheit\n");
    printf("6. Fahrenheit to Celcius\n");
    printf("7. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\nEnter number to convert: ");
    scanf("%f", &a);

    switch (choice) {
        case 1:
            result = meter_kilometer(a);
            break;
        case 2:
            result = kilometer_meter(a);
            break;
        case 3:
            result = gram_kilogram(a);
            break;
        case 4:
            result = kilogram_gram(a);
            break;
        case 5:
            result = celcius_fahrenheit(a);
            break;
        case 6:
            result = fahrenheit_celcius(a);
            break;
        case 7:
            exit(0);
        default:
            printf("\nInvalid choice!\n\n");
            return;
    }
    
    printf("\nResult: %.3f\n\n", result);
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float meter_kilometer(float m) {
    return m / 1000;
}

float kilometer_meter(float km) {
    return km * 1000;
}

float gram_kilogram(float g) {
    return g / 1000;
}

float kilogram_gram(float kg) {
    return kg * 1000;
}

float celcius_fahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheit_celcius(float f) {
    return (f - 32) * 5 / 9;
}