#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <locale>

void Print_Data(const char* data, size_t rows, size_t cols); // print only data

void Print_Data_with_zero(const char* data, size_t rows, size_t cols); // print /0 with data

void Print_triangle_data(const int* data, size_t rows);

void Print_data_shift(const int* data);