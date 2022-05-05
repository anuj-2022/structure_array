#include <stdio.h>
#include"struct_fun.h"

int main()
{
    int n,i,j;
    n=count();
    
    struct student data[n];
    input_data(data,n);
    
    print(data,n);

    return 0;
}

