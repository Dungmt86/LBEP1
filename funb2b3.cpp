// Tinh chu vi tam giac

#include<stdio.h>


int chuVitamgiac(int a, int b, int c){
   	 float cv = a+b+c;
	 return cv;
}

int dienTichtamgiac(int a, int b, int c){

	 float cv = a+b+c;
	 float p=cv/2;
	 float s= p*(p-a)*(p-b)*(p-c);
	 
	return s;
}


int main (){
	int a,b,c;
	printf("Nhap a=");
	scanf ("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
		
		if ((a+b)>c && (a+c)>b && (c+b)>a){
		printf("day la tam giac \n");
		float cv=chuVitamgiac(a,b,c);
	    printf("chu vi tam giac bang: %f \n",cv);
	    float s=dienTichtamgiac(a,b,c);
	    printf ("Dien tich tam giac bang: %f \n", s);
		}else{
		printf ("Day khong phai la tam giac");
     	}
}



