#include <stdio.h> 
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
    
	int t;
	int max=0;

	while (n>0) {
	  t=n%10;
	  n=n/10;
	  	if (max<t){
	 	max=t;
	 	
	   }
		 
	}
 	
    printf ("So max n la: %d" ,max);
	
   }
