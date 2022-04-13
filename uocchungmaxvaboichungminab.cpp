#include <stdio.h>
int main (){
	
	int a;
	int b;
	int i;
	int j;

	printf ("nhap vao so a:");
	scanf ("%d",&a);
	printf ("nhap vao so b:");
	scanf ("%d",&b);

    for (i=a-1,i=b-1;i<a,i<b;i--){
		if (a%i==0 &&  b%i==0) {
		
			printf ("UCLN la:%d",i);
			break;
		}
    }
		
	for (j=a+1,j=b+1;j>=a,j>=b;j++){
		if (j%a==0 &&  j%b==0) {
		
			printf ("\nBCNN la:%d",j);
			break;
		}
			
	}
	
}
