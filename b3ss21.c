#include <stdio.h>

int main(){
	char input[1000];
	printf("Moi ban nhap vao 1 chuoi bat ky: ");
	fgets(input, sizeof(input), stdin);
	FILE *file;
	file=fopen("bt01.txt", "a");
	if(file==NULL){
		printf("Khong the mo file\n");
		return 1;
	}
	fprintf(file,"%s",input);
	fclose(file);
	printf("Da them chuoi vao file thanh cong");
	
	return 0;
}
