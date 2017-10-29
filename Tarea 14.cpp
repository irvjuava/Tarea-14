#include <stdio.h>
#define MAX 5 

int main() {
	int edad=0;
	const float PI=3.1416;
	
	printf("zcual es tu edad?");
	scanf("%d",&edad);
	
	//MAX=6;
	//PI=23.14159265;
	
	printf("tu edad es= %d \n", edad);
	printf("Maximo= %d",MAX);
	printf("valor de PI=%f",PI);
	
	return 0;
}
