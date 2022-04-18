#include <stdio.h> 
int main () {
	int n;
	printf ("Nhap n:");
	scanf ("%d",&n);

	int ary[n];
	int i;
	for(i=0;i<n;i++){           //duyet mang
		scanf("%d",&ary[i]);
	}
      float S=0;
      float k=0;
      for (i=0;i<n;i++){
      	if (ary[i]%2!=0){
        S=S+ary[i];
        k=k+1;
	  }
            	
	  }
	 
      if (k==0){
      	printf ("khong co so le");
	  }else{
	   float TBC=S/k;
       printf ("Trung binh cong so le la: %f",TBC);
	  }
      
   	
}
