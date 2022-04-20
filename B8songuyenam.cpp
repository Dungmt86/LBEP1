#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("Nhap chuoi s =");
	scanf("%s",s);
    	int k;
		for(int i=0;i<strlen(s);i++){
		 if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117){		
	    k=k+1;
		}
 }
    printf ("So lan xuat hien cac so nguyen am la:%d",k);
}

