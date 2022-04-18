#include <stdio.h> 
int main () {
	int n;
	printf ("Nhap n:");
	scanf ("%d",&n);
    bool f = false;
	int ary[n];
	int i;
	for(i=0;i<n;i++){           //duyet mang
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf ("Nhap x:");
	scanf ("%d",&x);
	
	for (i=0;i<n;i++){
    	if (x==ary[i]){
	    f=true;
	    break;
     	}
    }
	if (f==false){
 		printf ("x khong co trong mang");
	 }else{
	 	printf ("x co trong mang");
	 }


  }
