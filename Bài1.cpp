#include<stdio.h>
int main(){
	int N = 10;
	// C�ch 1
	printf("Gia tri duoc khai bao la: %d\n",N);
	printf("Dia chi cua N trong bo nho la: %d\n", &N);
	// C�ch 2
	int *ptr = &N;
	printf("Gia tri duoc khai bao la: %d\n", *ptr);
	printf("Dia chi cua N trong bo nho la: %d\n", &*ptr);
	return 0;
}
