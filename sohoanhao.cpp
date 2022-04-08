#include <stdio.h>
int main () {
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	
	int i=1;
	int S=0;
	while (i<n) {
	  if (n%i==0){
	   
	   S=S+i;
	   }
	 	i=i+1;		
 	}
	 	if (n==S) {
	 	printf ("Day la so hoan hao %d" ,n);	
		 }else{
		 	printf ("Day khong phai la so hoan hao");
		 }
		

   }
