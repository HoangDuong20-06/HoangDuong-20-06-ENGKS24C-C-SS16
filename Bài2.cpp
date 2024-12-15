#include<stdio.h>
void swapPointer(int *number1, int *number2);
int main(){
	int num1= 20;
	int num2 = 6;
	printf("So thu nhat truoc khi doi la: %d\n",num1);
	printf("So thu hai truoc khi doi la: %d\n",num2);
	swapPointer(&num1, &num2);
	printf("So thu nhat sau khi doi la: %d\n", num1);
	printf("So thu hai sau khi doi la: %d\n", num2);
}
void swapPointer(int *number1, int *number2){
	int temp= *number1;
	*number1 = *number2;
	*number2 = temp;
}
