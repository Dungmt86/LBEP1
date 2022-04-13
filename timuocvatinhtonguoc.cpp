#include <stdio.h>
int main () {
	int i;
	int n;
	int S=0;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	printf ("Cac uoc la:");
	for (i=1;i<=n;i++) {
	
		
	
	    if (n%i==0){
	    printf ("%d \t",i);
	    S=S+i;
	   
		}
		
		
	}
	
	  printf ("\n Tong uoc la: %d ",S);


	
}
