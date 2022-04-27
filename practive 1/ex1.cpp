#include <stdio.h>

int main (){
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	float S=0;
	if (n<1){
		printf ("Fail");
	}else{
		for (int i=1;i<=n;i++){
		S=S+1/(float)i;
			
		}
		printf ("Tong la:%f",S);
		
	}
	
	
}
