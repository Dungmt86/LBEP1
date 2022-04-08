#include <stdio.h>
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	int sodu;
	int sodao;
	
	while (n>0) {
	  n=n/10;
	  sodu=n%10;
 	  sodao=sodao*10+sodu;
       }

	 	
		printf ("So dao la: %d" ,sodao);

   }
