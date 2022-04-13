#include <stdio.h> 
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
    
	int t;

	while (n>1) {
	  t=n%10;

	  	  n=n/10;
	  	  	
	}
 	
 	if (t%2==0) {
	 	 printf ("So n khong phai toan le");
	 }else{
	 	printf ("So n toan la so le");
	 }
    
	
   }
