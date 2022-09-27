#include "data_array.h"

/* Define a function that takes in a struct */
double data_sum(DataArray data)
{
    /* Define 2 local variables to use in the function */
    double sum = 0.0;
    int i;
    /* Calculate the sum of values */
    for (i = 0; i < data.length; i++) {
        sum = sum + data.pData[i];
    }
    /* Return the result to the block */
    return sum;
}