#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	char arrs[n][50];
	
	printf("NHap mang chuoi:\n");
	for(int i=0;i<n;i++){
		scanf("%s",arrs[i]);
	}
	
	char s1[50];
	printf("Nhap chuoi s1 =");
	scanf("%s1",s1);
	
	for(int i=0;i<n-1;i++){
		if (strcmp(arrs[i],s1)==0){
			printf ("Chuoi nhap vao co trong danh sach");
			break;	
		
	} else{
		printf ("Chuoi nhap vao khong co trong danh sach");
		break;
	}
	
	
	}
	
}

