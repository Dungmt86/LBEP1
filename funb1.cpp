// Tinh tong các chu so cua so nguyên n

#include<stdio.h>


int tinhTongn(int n){
	int t;
	int S=0;
    for (;n>0;) {
	  t=n%10;
	  S=S+t;
	  n=n/10;
 	 
       }
	return S;
	
}


int main(){
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	int S = tinhTongn(n);
	printf ("Tong cac chu so n la:%d",S);
	
}


