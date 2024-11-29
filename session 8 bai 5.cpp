#include <stdio.h>
int main(){
	int arr[3][3]={
	{1,9,5},
	{6,2,3},
	{2,3,8}};
	int sum,bientrai,bienphai;
	bientrai=arr[0][0]+arr[1][0]+arr[2][0];
	bienphai=arr[0][2]+arr[1][2]+arr[2][2];
	sum=bientrai + bienphai;
	
	printf("Tong cac phan tu tren duong bien la %d",sum);
	return 0;
}


