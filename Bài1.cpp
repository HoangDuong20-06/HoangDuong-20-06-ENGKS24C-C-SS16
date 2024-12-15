#include<stdio.h>
int main(){
	int N = 10;
	// Cách 1
	printf("Gia tri duoc khai bao la: %d\n",N);
	printf("Dia chi cua N trong bo nho la: %d\n", &N);
	// Cách 2
	int *ptr = &N;
	printf("Gia tri duoc khai bao la: %d\n", *ptr);
	printf("Dia chi cua N trong bo nho la: %d\n", &*ptr);
	return 0;
}
