#include<stdio.h>
int main(){
	int arr[3][3]={
	 {2,0,6},
	 {9,10,8},
	 {5,6,9}};
	int sum;
	printf("Duong cheo chinh la: ");
	for(int i =0 ;i<3; i++){
			printf(" %d ",arr[i][i]);
			sum += arr[i][i];
		}
	printf("\nTong duong cheo chinh la: %d", sum);
	return 0;
}

