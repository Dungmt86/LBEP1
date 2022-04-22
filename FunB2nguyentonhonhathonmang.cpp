#include <stdio.h>

int maxMang(int arr[],int n){
	int m=arr[0];
	for (int i=0;i<n;i++){
		if (m<arr[i]){
		m=arr[i];
		}
	}
	return m;
	
}

bool soNguyento(int n){
	if (n<2)
	return false;
	if (n==2 || n==3)
	return true;
	for (int i=2;i<=n/2;i++){
		if (n%2==0)
		return false;
	}
	return true;
}

int main (){
	
	int arr[5]={11,3,9,6,8};
    int i;
    bool f=false;
    
  	int sntnn;
  	sntnn=maxMang(arr,5);
  	while(f==false){
  		sntnn++;
  		f=soNguyento(sntnn);
  		if(f){
  			break;
		  	}
		  	
	}
	printf("so nguyen to nho nhat lon hon gia tri trong mang la: %d",sntnn);
}
