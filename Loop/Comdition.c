#include <stdio.h>

int main() {
  int number;

  while(1){
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
      printf("The number is a multiple of 2.\n");
      break;
    } else {
      printf("The number is not a multiple of 2.\n");
    }
  }

  return 0;
}
