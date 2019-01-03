#include "stdio.h"


template <class Ta,class Tb>
void swap(Ta & a,Tb & b)
{
	int temp = a;
	a = b;
	b = temp;
}




int main(void)
{
	char ** x;
	x = new char*[10];
	for(int i=0;i<10;i++)
	{
		x[i] = new char[10];
	}
	x[9][9]=12;
	printf("the output is : %d \n",x[9][9]);


	for(int i=0;i<10;i++)
	{
		delete []x[i];

	}
	delete []x;
	x= NULL;

}
