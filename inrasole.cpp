#include <stdio.h>
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	
	int i=0;
	int SL=0;
	printf ("so le la:");
	while (i<=n) {
	  if (i%2==1){
	   
	   printf ("%d \t",i);
 	   	SL=SL+1;
       }
		 i=i+1;
	 	 		
 	}
	 	
		printf ("\n Tat ca co: %d so le" ,SL);

   }
