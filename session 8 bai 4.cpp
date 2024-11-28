#include<stdio.h>

int main(){
	int arr[2][3]={{10,7,3},{8,5,6}};
	int max=arr[0][0],i,j;
	for( i=0;i<2;i++){
		for( j=0;j<3;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}	
		}	
	}
	printf("so lon nhat la %d",max);
	return 0;
}
