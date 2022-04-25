#include <stdio.h>
void menu (){
	printf ("TINH TOAN \n");
	printf ("=======================\n");
	printf ("1. Nhap so \n");
	printf ("2. Tinh tong \n");
	printf ("3. Tinh hieu \n");
	printf ("4. Tinh tich \n");
	printf ("5. Tinh thuong \n");
	printf ("6. Thoat \n");
	printf ("=======================\n");
	printf ("Vui long chon chuc nang: \n");
}

int tinhTong(int a,int b){
	int sum=a+b;
	return sum;	
}

int tinhHieu(int a,int b){
	int sub=a-b;
	return sub;
}

int tinhTich(int a,int b){
	int multi=a*b;
	return multi;
}

double tinhThuong(int a,int b){
	return b!=0?(double)a/b:NULL;
}

//void nhapSo(int *a,int *b){
//	printf ("Nhap so thu nhat:");
//	scanf ("%d",a);
//	printf ("Nhap so thu hai:");
//	scanf ("%d",b);


int main (){
	int m;
	int a,b;
	do {
		menu();
		scanf ("%d",&m);
		switch (m){
			case 1:{
//			nhapSo(&a,&b);
                 printf ("Nhap so thu nhat:");
                 scanf ("%d",&a);
                 printf ("Nhap so thu hai:");
                 scanf ("%d",&b);
				break;
			}
			
			case 2:{
                int tong = tinhTong(a,b);
                printf ("Tong 2 so la:%d \n",tong);
                break;
			}
			
			case 3:{
                int hieu = tinhHieu(a,b);
                printf ("Hieu 2 so la:%d \n",hieu);
                break;
			}
			
			case 4:{
                int tich = tinhTich(a,b);
                printf ("Tich 2 so la:%d \n",tich);
                break;
			}
			
			case 5:{
				double c=tinhThuong(a,b);
				if (c==NULL){
					printf ("Khong the chia cho 0 \n");
				}else{
					printf("Thuong 2 so la:%lf\n",c);
				}
								
				break;
			}
		}
	}while (m!=6);
     printf ("Chao cac ban nhe! Hen gap lai.");
}
