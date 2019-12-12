#include <stdio.h>

int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[10];
	int n;
	printf("tekuchii massiv: \n");
	for (int i = 0; i <= 9; i++) {   
		printf(" %i", a[i]);        
	}                             

    printf("\n");
	printf("vvedite n-sdvig: ");
	scanf("%i", &n);
	//
	if (9 - n <= 0) {
		printf("chislo slishkom malenkoe or big");
	}
	else {
		for (int i = 0; i < 10; i++) {
			b[i - n] = a[i];
			b[n + i] = 0;
		}
	}
	//
	printf("konechii massiv: \n");
	for (int i = 0; i <= 9; i++) {
		printf(" %i", b[i]);
	}

	return 0;
}
