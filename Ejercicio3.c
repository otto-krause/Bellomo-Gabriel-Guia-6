#include <stdio.h>
#include <stdlib.h>
int main()
{
	char mes;
	int anio=0;
	printf("Introduzca el numero de un mes y despues el anio para saber si es bisiesto: ");
	scanf("%c", &mes);
	scanf("%d", &anio);
	int feb=28;
	if(anio%4==0 &&(anio%100!=0 || anio%400!=0)){
	feb=29;
	}
	switch(mes)
	{
	case '1':
		puts("31");
		break;
	case '2':
		printf("%d", feb);
		break;
	case '3':
		puts("31");
		break;
	case '4':
		puts("30");
		break;
	case '5':
		puts("31");
		break;
	case '6':
		puts("30");
		break;
	case '7':
		puts("31");
		break;
	case '8':
		puts("31");
		break;
	case '9':
		puts("30");
		break;
	case '10':
		puts("31");
		break;
	case '11':
		puts("30");
		break;
	case '12':
		puts("31");
		break;
	default:
		puts("Error");
	}
	system("pause");

}
