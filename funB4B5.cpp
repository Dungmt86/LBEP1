#include <stdio.h>
int uCLN2so(int a, int b){
   if (a>b){
   	for (int i=b;i>0;i--){
   		if (a%i==0 && b%i==0){
   			return i;
		   }
 	 		
	   }
   	
   }else{
   	for (int i=a;i>0;i--){
   		if (a%i==0 && b%i==0){
   			return i;
		   }
   		 		
	   }
   	
   }
	
}

int bCNN2so(int a, int b){
   if (a>b){
   	for (int i=a;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
 	 		
	   }
   	
   }else{
   	for (int i=b;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
   		 		
	   }
   	
   }
	
}

int main (){
    int a=3;
    int b=6;
	int UCLN = uCLN2so(a,b);
	printf ("\nUCLN cua 2 so la:%d",UCLN);
	int BCNN = bCNN2so(a,b);
	printf ("\nBCNN cua 2 so la:%d",BCNN);
	
}
