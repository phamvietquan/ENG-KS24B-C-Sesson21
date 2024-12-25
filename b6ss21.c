#include <stdio.h>

int main(){
	char n;
	
	FILE *file01;
	file01=fopen("bt01.txt","r");
	if(file01==NULL){
		printf("Khong the mo FILE\n");
		return 1;
	}
	
	FILE *file06;
	file06=fopen("bt06.txt","w");
	if(file06==NULL){
		printf("Khong the mo FILE\n");
		return 0;
	}
	while((n=fgetc(file01))!=EOF){
		fputc(n,file06);
	}
	fclose(file01);
	fclose(file06);
	printf("Sao chep thanh cong FILE bt01 sang FILE bt06.");
	return 0;
}
