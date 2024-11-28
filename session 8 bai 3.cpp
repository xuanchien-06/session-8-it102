#include<stdio.h>

int main(){
	int n;
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("nhap gia tri cho arr[%d][%d] ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",arr[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
