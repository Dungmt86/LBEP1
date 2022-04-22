#include <stdio.h>

void nhapMang(int arr[], int n){
	printf ("Nhap mang: \n");
	for (int i=0;i<n;i++){
	scanf ("%d",&arr[i]);
	}
	
}

void xuatMang(int arr[], int n){
	printf ("\nXuat mang: \n");
	for (int i=0;i<n;i++){
	printf ("%5d",arr[i])	;
	}
	
}


int bCNN2so(int a, int b){
   if (a>b){
   	for (int i=a;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
 	 		
	   }
   	
   }else{
   	for (int i=b;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
   		 		
	   }
   	
   }
	
}

int bCNN_mang(int arr[], int n){
	int b= arr[0];
	for (int i=1;i<n;i++){
	b= 	bCNN2so(b,arr[i]);
	}
	return b;
	
}


int main (){
	int arr[5];
	nhapMang(arr,5);
	xuatMang(arr,5);
	int BCNN = bCNN_mang(arr,5);
	printf ("\n BCNN cua mang la:%d",BCNN);
	
}
