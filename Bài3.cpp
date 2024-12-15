#include<stdio.h>
void tongHaiSoNguyen(int *number1, int *number2, int *sum);
int main(){
	int num1= 20;
	int num2 = 6;
	int sum;
	tongHaiSoNguyen(&num1, &num2, &sum);
	printf("Tong hai so nguyen la: %d", sum);
}
void tongHaiSoNguyen(int *number1, int *number2, int *sum){
	*sum = *number1 + *number2;
}
