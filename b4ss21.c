#include <stdio.h>

int main(){
	char input[1000];
	FILE *file;
	file=fopen("bt01.txt","r");
	if(file==NULL){
		printf("Khong the mo file\n");
		return 1;
	}
	if(fgets(input,sizeof(input),file)!=NULL){
		printf("Dong dau tien trong file la: %s", input);
	}else{
		printf("Khong the doc dong dau tien trong file hoac FILE trong ");
	}
	fclose(file);
	return 0;
}
