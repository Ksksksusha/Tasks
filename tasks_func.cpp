#include "tasks.h"

void Print_Data(const char* data, size_t rows, size_t cols)
{
    for(size_t i=0; i < rows; i++)
    {
        for(size_t j=0; j < cols; j++)
        {
            if(*(data + i*cols + j) != '\0')
                printf("%c ", *(data + i*cols + j));
        }
        printf("\n");
    }

}

void Print_Data_with_zero(const char* data, size_t rows, size_t cols)
{
    for(size_t i=0; i < rows; i++)
    {
        for(size_t j=0; j < cols; j++)
        {
            if(*(data + i*cols + j) != '\0')
                printf("%c  ", *(data + i*cols + j));
            else
                printf("\\0 "); 
        }
        printf("\n");
    }
}

void Print_triangle_data(const int* data, size_t rows)
{
    for(size_t i=0; i < rows; i++)
    {
        for(size_t j=0; j<=i; j++)
        {
            printf("%d ", *(data + (i*(i+1))/2 + j));
        }
        printf("\n");
    }
}

void Print_data_shift(const int* data)
{
    
    printf("%d %d \n", *(data), *(data+1));

    for(size_t i=0; i < (size_t)*(data); i++)
    {
        for(size_t j=0; j < (size_t)*(data+1); j++)
        {
            printf("%d  ", *(data + i*(size_t)*(data+1) + j + 2));
        }
        printf("\n");
    }
}