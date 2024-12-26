#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototypes
float parse_data(char string[], char item[], int *quantity, float *cost);
void pretty_print(char item[], int quantity, float cost, float subtotal);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    //file open
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Unable to open the input file.\n");
        return 1;
    }

    char line[100];
    int total_items = 0;
    float total_cost = 0.0;

    // read file
    while (fgets(line, sizeof(line), file) != NULL) {
        char item[50];
        int quantity = 0;
        float cost = 0.0, subtotal = 0.0;

        subtotal = parse_data(line, item, &quantity, &cost);
        total_items += quantity;
        total_cost += subtotal;

        pretty_print(item, quantity, cost, subtotal);
    }

    // file close
    fclose(file);

    // Print total
    printf("-----------------------------------------------------\n");
    printf("Total Items: %d Total Cost: $%.2f\n", total_items, total_cost);

    return 0;
}


float parse_data(char string[], char item[], int *quantity, float *cost) {
    sscanf(string, "%s %d %f", item, quantity, cost);
    return (*quantity) * (*cost);
}


void pretty_print(char item[], int quantity, float cost, float subtotal) {
    printf("Item: %-10s Quantity: %2d Item Cost: $%6.2f Subtotal: $%7.2f\n", item, quantity, cost, subtotal);
}