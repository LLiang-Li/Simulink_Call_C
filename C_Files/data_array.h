/* Define a struct called DataArray */
typedef struct DataArray_tag {
    /* Define a pointer called pData */
    double* pData;
    /* Define the variable length */
    int length;
} DataArray;

/* Function declaration */
double data_sum(DataArray data);