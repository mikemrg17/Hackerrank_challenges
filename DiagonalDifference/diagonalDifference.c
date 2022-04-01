/* Preproccessor commands */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Functions declaration */
int diagonalDifference(int, int, int**);


int main(void){
    int mtx_len = 0;
    printf("Please type the matrix lenght nxn:\n");
    scanf("%d", &mtx_len);
    int** matrix = malloc(mtx_len * (sizeof(int*)));

    srand((unsigned)time(NULL));
    /* Fill the matrix */
    for(int i = 0; i < mtx_len; i++){
        *(matrix + i) = malloc(mtx_len * (sizeof(int)));
        for(int j = 0; j < mtx_len; j++){
            *(*(matrix + i) + j) = rand() % 10;
            printf("[%d] ", *(*(matrix + i) + j));
        }
        printf("\n");
    }

    int abs_difference = diagonalDifference(mtx_len, mtx_len, matrix);
    printf("Abosule difference is: %d\n", abs_difference);

    return 0;
}

int diagonalDifference(int mtx_rows, int mtx_columns, int** mtx){
    int absDifference = 0;
    int left_right_diagonal = 0;
    int right_left_diagonal = 0;
    //left to right diagonal
    for(int i = 0; i < mtx_rows; i++){
        left_right_diagonal += *(*(mtx + i)+i);
    }

    //right to left diagonal
    for(int i = 0; i < mtx_rows; i++){
        right_left_diagonal += *(*(mtx + i) + (mtx_columns-1 - i));
    }
    
    absDifference = abs(left_right_diagonal-right_left_diagonal);
    return absDifference;
}
