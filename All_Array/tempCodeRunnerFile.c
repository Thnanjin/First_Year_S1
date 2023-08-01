#include <stdio.h>

int main() {
    int arr[5];
    int A[5] = {-3, 2, -20, -100, 0};
    int OddArr[5], odd=0;
    int EvenArr[5],even=0;

    for (int i = 0; i < 5; i++) {
        if (A[i] % 2 == 0) {
            EvenArr[even] = A[i];
            even++;
        } else {
            OddArr[odd] = A[i];
            odd++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < odd; i++) {
        printf("%d ", OddArr[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < even; i++) {
        printf("%d ", EvenArr[i]);
    }
    
    return 0;
}