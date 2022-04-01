/* Preproccessor commands */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Functions declaration */
long aVeryBigSum(int, long*);

int main(void){
    int arr_len = 0;
    printf("Please type how many numbers the array will contain\n");
    scanf("%d", &arr_len);
    
    long array[arr_len];

    srand((unsigned)time(NULL));
    for(int i = 0; i < arr_len; i++){
        array[i] = rand() % 10;
        printf("[%ld],", array[i]);
    }
    printf("\n");

    long totalSum = 0L;
    totalSum = aVeryBigSum(arr_len, array);
    printf("Total sum = %ld\n", totalSum);

    return 0;
}

long aVeryBigSum(int ar_count, long* ar){
    long sum = 0L;
    for(int i = 0; i < ar_count; i++){
        sum += *(ar+i);
    }

    return sum;
}
