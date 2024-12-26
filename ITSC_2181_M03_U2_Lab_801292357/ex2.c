#include <stdio.h> 

int cube(int); 

int product;

int main(void) 
{ 
    int product = cube(3);
    printf("Cube Volume is = %d\n", product); 
} 

int cube(int side){
    product = side * side * side;
    return product;
}