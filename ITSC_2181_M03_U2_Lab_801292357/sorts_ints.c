#include <stdio.h>

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertionSort(int arr[], int size){
  int i,j;

  for (i = 1; i < size; i++){
    int key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key){
      swap(&arr[j + 1], &arr[j]);
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

int main(){
  int arr[10];

  printf("Please enter 10 integer separated by a space:\n");
  for (int i = 0; i < 10; i++){
    if (scanf("%d", &arr[i]) != 1) {  
        printf("Invalid input. Please enter integers only.\n");
        return 1;
    }
  }

  insertionSort(arr, 10);
  printf("The list after sort is: \n");
  for (int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}