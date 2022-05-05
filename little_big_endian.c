#include<stdio.h>

int main()
{
	int i;
	unsigned int data = 0x11223344;
	unsigned char *result = (char *) &data;
	for(i=0;i<4;i++)
	printf("address is 0x%x and data is %d\n",result[i],&result[i]);
	if(result[0] == 0x44)
	printf("machine is BIG Endian\n");
	else
	printf("machine is LITTLE Endian");
	return 0;
}
