#include<stdio.h>
int timGiaTri(int arr[], int size, int value);
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int value = 6;
	int pos = timGiaTri(arr, size, value);
	if(pos!= -1){
		printf("Phan tu %d nam o vi tri %d trong mang\n", value, pos);
	}else{
		printf("Phan tu %d khong ton tai trong mang\n", value);
	}
	return 0;
}
int timGiaTri(int arr[], int size, int value){
	for(int i = 0 ; i<size; i++){
		if(arr[i] == value){
			return i;
		}
	}
	return -1;
}
