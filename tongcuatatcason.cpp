#include <stdio.h>
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);

	int t;
	int S=0;
    for (;n>0;) {
	  t=n%10;
	  S=S+t;
	  n=n/10;
 	 
       }

	 	printf ("Tong cac so cua n la: %d" ,S);

   }
