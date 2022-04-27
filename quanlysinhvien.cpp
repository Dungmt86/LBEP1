#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
void menu (){
	
	printf ("QUAN LY SINH VIEN \n");
	printf ("=======================\n");
	printf ("1. Nhap so luong sinh vien cua lop \n");
	printf ("2. Nhap danh sach ten sinh vien \n");
	printf ("3. Sap xep ten sinh vien theo thu tu alphabe \n");
	printf ("4. In ra danh sach sinh vien \n");
	printf ("5. Thoat chuong trinh  \n");
	printf ("=======================\n");
	printf ("Vui long chon chuc nang: \n");
}

void nhapSinhvien(char arr[][50],int n){
	printf("Nhap DS sinh vien \n");
	for(int i=0;i<n;i++){
		printf("\n Nhap sinh vien thu %d: ",i+1);
		scanf("%s",arr[i]);
	
	
	}
}

void xuatSinhvien(char arr[][50],int n){
	printf("Xuat DS sinh vien \n");
	for(int i=0;i<n;i++){
		printf("\nTT %d: ",i+1);
		printf("%s",arr[i]);
	
	
	}
}

void xapXep(char arr[][50], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0; j < n-i-1; j++){
				if(strcmp(arr[j],arr[j+1]) > 0){
				char tmp[50];
				strcpy(tmp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],tmp);
			}
		}
	}
	printf("Danh sach sinh vien sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",arr[i]);
	}
}


int main (){
	int m;
	int n;
	
	do {
		menu();
		scanf ("%d",&m);
		switch (m){
			case 1:{
//			nhapSo(&a,&b);
                printf ("Nhap so luong sinh vien cua Lop:");
                scanf ("%d",&n);
                break;
			}
			
			case 2:{
			  	char arr[n][50];
                nhapSinhvien(arr,n);
                
                break;
			}
			
			case 3:{
		        char arr[n][50];
			    xapXep(arr,n);
                
                break;
			}
			
			case 4:{
	         	char arr[n][50];
				xuatSinhvien(arr,n);
                
                break;
			}
			
}
	}while (m!=5);
     printf ("Chao cac ban nhe! Hen gap lai.");
}
