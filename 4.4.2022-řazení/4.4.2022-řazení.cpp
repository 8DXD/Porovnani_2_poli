#include <stdio.h>
#include <stdlib.h>

//Vstupem jsou 2 pole čísel. Porovnejte pole (výskyt v prvním, druhém, obou)

int porovnej(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main() {
	int pole1[5] = { 2,4,3,2,1 };
	int pole2[5] = { 0,1,4,3,2 };

	//Výpis pole
	printf("pole1: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", pole1[i]);
	}
	printf("\npole2: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", pole2[i]);
	}
	printf("\n\n");

	qsort(pole1,5,sizeof(*pole1), porovnej);
	qsort(pole2, 5, sizeof(*pole2), porovnej);

	//Výpis pole
	printf("pole1: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", pole1[i]);
	}
	printf("\npole2: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", pole2[i]);
	}
	printf("\n\n");
}