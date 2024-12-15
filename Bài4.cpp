#include<stdio.h>
void mang(int *arr, int size);
int main(){
	int arr[]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	mang(arr, size);
}
void mang(int *arr, int size){
	for (int i = 0; i < size; i++){
		printf("%d ", *(arr+i));
	}
}
