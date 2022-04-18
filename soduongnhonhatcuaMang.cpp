#include <stdio.h> 
int main () {
	int n;
	printf ("Nhap n:");
	scanf ("%d",&n);
    int ary[n];
	int i,min;
	for(i=0;i<n;i++){           //duyet mang
		scanf("%d",&ary[i]);
	}

      for (i=0;i<n;i++){
      	if (ary[i]>0){
        min=ary[i];
      	break;
        }
      }
	  
	  for (i=0;i<n;i++){
      	if (ary[i]>0 && ary[i]<min){
        min=ary[i];
      	     	
        }
      }
	 printf ("So duong nho nhat cua Mang la:%d",min) ;
	  
          
}

