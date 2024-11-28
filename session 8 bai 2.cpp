#include<stdio.h>

//khai bao va gan gia tri cho 1 mang bat ki
//nguoi dung nhap vao 1 gia tri sau do kiem tra xem có trong mang khong
//neu có thì in ra vi tri phan tu
//neu khong thì in ra phan tu khong ton tai

int main(){
	int arr[5]={1,3,5,7,9};
	int use,check=0;
	int size = sizeof(arr)/sizeof(arr[5]);
	printf("nhap 1 gia tri bat ki: ");
	scanf("%d",&use);
	for(int i=0;i<size;i++){
		if(arr[i]==use){
			printf("vi tri phan tu trong mang la: %d",i);
			check=1;
			break;	
		} 
	}
	if(check==0){
		printf("phan tu khong co trong mang\n");	
	}
	
	return 0;
}
