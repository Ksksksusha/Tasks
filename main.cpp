#include "tasks.h"

int main()
{
    // check Print_Data and Print_Data_with_zero

    char data_0[3][6] = {"12345", "1234", "123"};

    printf("check print data:\n");

    Print_Data((char *)data_0, 3, 5);
    
    printf("check print data with '\\0':\n");

    Print_Data_with_zero((char *)data_0, 3, 5);



    // check Print_triangle_data

    int data_1[] = {0,
                  2, 3,
                  -2, -1, 5,
                  5, 2, -1, 0, 
                  5, 1, -3, 2, 0};
    
    printf("check Print_triangle_data:\n");

    Print_triangle_data((int *)data_1, 5);



    // check Print_data_shift

    int data_2[] = {3, 5,
                    10, 20, 30, 40, 50,
                    11, 21, 31, 41, 51,
                    12, 22, 32, 42, 52};

    printf("check Print_data_shift:\n");

    Print_data_shift((int *)data_2);

}