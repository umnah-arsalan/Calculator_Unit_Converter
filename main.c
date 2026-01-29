#include<stdio.h>
#include<stdlib.h>
#include "utilities.h"

int main() {
    int choice;

    while (1) {
        printf("-------Calculatir - Unit Converter-------\n\n");
        printf("1. Calculator\n");
        printf("2. Unit converter\n");
        printf("3. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Calculator();
                break;
            case 2:
                Converter();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid choice!\n\n");
                return 1;
        }
    }
    return 0;
}