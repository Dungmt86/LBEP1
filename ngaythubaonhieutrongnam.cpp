#include <stdio.h>
int main () {
	int M;
	printf ("Nhap vao thang:");
	scanf ("%d", &M);
	int D;
	printf ("Nhap vao ngay:");
	scanf ("%d", &D);
	int Ng;
	int Th;
	
	if ((M>0)&&(M<13)) {
		if (M==1){
			if ((D>0)&&(D<32)) {
				int Ng=D;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d \n", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
			
		}else{
			if (M==2){
			if ((D>0)&&(D<29)) {
				int Ng=D+31;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
			
		}else{	
			if (M==3){
			if ((D>0)&&(D<32)) {
				int Ng=D+59;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
		}else{	
			if (M==4){
			if ((D>0)&&(D<31)) {
				int Ng=D+90;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
		}else{	
			if (M==5){
			if ((D>0)&&(D<32)) {
				int Ng=D+120;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
			}else{	
			if (M==6){
			if ((D>0)&&(D<31)) {
				int Ng=D+151;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
			}else{	
			if (M==7){
			if ((D>0)&&(D<32)) {
				int Ng=D+181;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
			
			}else{	
			if (M==8){
			if ((D>0)&&(D<32)) {
				int Ng=D+212;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
			}else{	
			if (M==9){
			if ((D>0)&&(D<31)) {
				int Ng=D+243;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
		}else{	
			if (M==10){
			if ((D>0)&&(D<32)) {
				int Ng=D+273;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
			}else{	
			if (M==11){
			if ((D>0)&&(D<31)) {
				int Ng=D+304;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
		}else{	
			if (M==12){
			if ((D>0)&&(D<32)) {
				int Ng=D+334;
				int Th=(Ng%7)+1;
					
					if (Th==1) {
						printf ("Hom nay la chu nhat \n");
						printf ("Hom nay la ngay thu: %d", Ng);
					}else{
						printf ("Hom nay la thu: %d \n",Th);
						printf ("Hom nay la ngay thu: %d", Ng);
					}
			
				
			}else{
				printf ("Khong phai la ngay");
			}
		
		
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
		
	    }
	    }
			
		}
		
			
	}else{
		printf ("Day khong phai la thang");
	}
	
		
	
}
