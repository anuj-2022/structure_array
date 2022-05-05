#include<stdio.h>

struct student
{
    char name[5];
    char branch[2];
    float cgpa;
};


int count(void);
void input_data(struct student data[],int n);
void print(struct student data[],int n);


int count(void)
{
  int n,i,j;
    printf("enter the size of struct array :\n");
    scanf("%d",&n);
    return n;
}

void input_data(struct student data[],int n)
{
    int i;
     for(i=0;i<n;i++)
    {
        printf("enter the name of student %d\n",i+1);
        scanf("%s",data[i].name);
        
        printf("enter the branch of student %d\n",i+1);
        scanf("%s",data[i].branch);
        
        printf("enter the cgpa of student %d\n",i+1);
        scanf("%f",&data[i].cgpa);
        
    }
}

void print(struct student data[],int n)
{
    int i;
   printf("name\tbranch\tchpa\n");
    for(i=0;i<n;i++)
    printf("%s\t%s\t%f\n",data[i].name,data[i].branch,data[i].cgpa); 
}
