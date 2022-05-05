#include <stdio.h>

int main()
{
    char (*arr[3])[7]={{"apple"},{"banana"},{"orange"}};
    
    printf("Hello World %s\n",*arr[1]);

    return 0;
}

