//print middle name
#include<stdio.h>
#include<string.h>
void main()
{
	char name[30];
	int i;
	printf("Enter the full name\n");
	scanf("%[^\n]%*c", name);
	for (i = 0; !isspace(name[i]); i++){}
		i++;
	printf("Father name is: \n");
	for (;!isspace(name[i]); i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");



}