#include<stdio.h>
int sumOfNumbers(int arr[]){
	int sum = 0;
	int i;
	for(i=0;i<5;i++){
		sum = sum+ arr[i];
	}
	return sum;
}
int main(){
	int arr[5];
	int i;
	
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		
	}
	int s =sumOfNumbers(arr);
	printf("%d\n", s);
}
