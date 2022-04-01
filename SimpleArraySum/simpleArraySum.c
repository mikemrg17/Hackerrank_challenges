//Preprocessor commands
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Function declarations
int simpleArraySum(int , int*);

int main(void){
    int arr_len = 0;
    printf("Please type how many numbers the array will contain\n");
    scanf("%d", &arr_len);
    
    int array[arr_len];

    srand((unsigned)time(NULL));
    for(int i = 0; i < arr_len; i++){
        array[i] = rand() % 10;
        printf("[%d],", array[i]);
    }
    printf("\n");
    printf("AR SIZE 1 = %ld\n", sizeof(array));
    int totalSum = 0;
    totalSum = simpleArraySum(arr_len, array);
    printf("Total sum = %d\n", totalSum);
    return 0;
}

int simpleArraySum(int ar_count, int* ar){
    int sum = 0;
    for(int i = 0; i < ar_count; i++){
        printf("[%d]", *(ar + i));
        sum += *(ar + i);
    }
    printf("\n");
    return sum;
}

