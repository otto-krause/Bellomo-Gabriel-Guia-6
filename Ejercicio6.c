#include <stdio.h>
#include <stdlib.h>
int main()
{
	int dia;
	char ch;
	printf("Introduzca el dia de nacimiento: ");
	scanf("%d", &dia);
	printf("Introduzca el mes de nacimiento: ");
	scanf("%d", &ch);
	switch(ch)
	{
	case 1:
		if(dia<21){
		puts("Capricornio.");
		}
		else {
		puts("Acuario.");
		}
        break;
	case 2:
		if(dia<20){
			puts("Acuario");
		}
		else {
			puts("Piscis");
		}
		break;
	case 3:
		if(dia<21){
			puts("Piscis.");
		}
		else {
			puts("Aries.");
		}
		break;
	case 4:
		if(dia<21){
			puts("Aries.");
		}
		else {
			puts("Tauro.");
		}
		break;
	case 5:
		if(dia<21){
			puts("Tauro.");
		}
		else {
			puts("Geminis.");
		}
		break;
	case 6:
		if(dia<22){
			puts("Geminis.");
		}
		else {
			puts("Cancer.");
		}
		break;
	case 7:
		if(dia<23){
			puts("Cancer.");
		}
		else {
			puts("Leo.");
		}
		break;
	case 8:
		if(dia<24){
			puts("Leo.");
		}
		else {
			puts("Virgo.");
		}
		break;
	case 9:
		if(dia<23){
			puts("Virgo.");
		}
		else {
			puts("Libra.");
		}
		break;
	case 10:
		if(dia<23){
			puts("Libra.");
		}
		else {
			puts("Escorpio.");
		}
		break;
	case 11:
		if(dia<23){
			puts("Escorpio.");
		}
		else {
			puts("Sagitario.");
		}
		break;
	case 12:
		if(dia<22){
			puts("Sagitario.");
		}
		else {
			puts("Capricornio.");
		}
		break;
	default:
		puts("Error");
	}
	system("pause");

}
