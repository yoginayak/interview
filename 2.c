/*even or odd for 1-100 using recursion*/

#include<stdio.h>
void display(int);
int even=0,odd=0;
void main()
{
	display(1);
	printf("Even number is %d and odd number is %d\n",even,odd);
}

void display(int i){
	if (i>100)
	{
		return;
	}
	if (i%2)
	{
		even++;
		display(++i);
	}
	else
	{
			odd++;
			display(++i);
	}

}