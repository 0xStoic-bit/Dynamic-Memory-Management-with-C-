#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseArray(int *arr , int size){
	int *start = arr; // 0. indeksi işaret ediyor
	int *end = arr+size-1; // 
	int temp;
	
	
	while(start<end){
		
		temp = *start; //start içindeki değeri temp e yedekle
		start = *end; //end in içindeki değeri startın olduğu yere yaz
		*end = temp;   //tempteki yedeği end in olduğu yere yaz 
		
		start++;
		end--;
		
		
	}
	
	
}


int main(){
	
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	
	reverseArray(arr,9);
	
	printf("Ters Cevrilmis Dizi : \n");
	int i;
	for(i = 0;i<9;i++){
		printf("%d",arr[i]);
	}
	
	
	
	return 0;
}
