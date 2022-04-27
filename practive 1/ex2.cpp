#include <stdio.h> 

void nhapMang(int arr[],int n){
	printf ("Nhap mang n: \n");
	for (int i=0;i<n;i++){
	 scanf ("%d",&arr[i]);
	}
}

void reverseArray(int arr[],int n){
for (int i=0;i<n/2;i++){
      	int temp=arr[i];
      	arr[i]=arr[n-i-1];
      	arr[n-i-1]=temp;
          
	}
}

void xuatMang(int arr[],int n){
	printf ("\nXuat mang n: \n");
	for (int i=0;i<n;i++){
	 printf ("%5d",arr[i]);
	}
}


int main () {
	int arr[5];
	nhapMang(arr,5);
	reverseArray(arr,5);
	xuatMang(arr,5);
  
}

