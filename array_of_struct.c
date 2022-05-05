#include <stdio.h>

struct s
{
        char c;
}data[5]={'h','e','l','l','o'};

int main()
{
    int i,j;
    char cc;
 //   printf("Hello World %c\n",data[1].c);
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++){
        if(data[i].c > data[j].c){
            cc=data[i].c;
            data[i].c=data[j].c;
            data[j].c=cc;
        }
        
        }
    }
    for(i=0;i<5;i++)
    printf("%c\n",data[i].c);

    return 0;
}

