#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	printf("Introduzca una nota: ");
	scanf("%c", &ch);
	switch(ch)
	{
	case 'A':
		puts("Excelente.");
		break;
	case 'B':
		puts("Buena.");
		break;
	case 'C':
		puts("Regular.");
		break;
	case 'D':
		puts("Suficiente.");
		break;
	case 'F':
		puts("No Suficiente.");
		break;
	default:
		puts("Error");
	}
	system("pause");

}
