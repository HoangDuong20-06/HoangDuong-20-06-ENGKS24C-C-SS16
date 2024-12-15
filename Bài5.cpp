#include<stdio.h>
void hamThem(int *arr, int pos, int value); 
int main(){
	int arr[]={1,2,3,4,5,7,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Mang ban dau la: ");
	for(int i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	int value = 20;
	int pos = 6;
	hamThem(arr, pos, value);
	printf("\nMang sau khi them la: ");
	for(int i = 0; i<size ; i++){
		printf("%d ",arr[i]);
	}
}
void hamThem(int *arr, int pos, int value){
	arr[pos]=value;
}
