#include <stdio.h>

int main(){
	int n;
	char input[1000];
	FILE *file;
	
	file=fopen("bt05.txt","w");
	if(file==NULL){
		printf("Khong the mo FILE\n");
		return 1;
	}
	printf("Moi ban nhap so dong: ");
	scanf("%d", &n);
	getchar();
	for(int i=0;i<n;i++){
		printf("Moi ban nhap noi dung dong %d: ", i+1);
		fgets(input,sizeof(input),stdin);
		fprintf(file,"%s",input);
	}
	fclose(file);
	
	
	file=fopen("bt05.txt", "r");
	if(file==NULL){
		printf("Khong the mo FILE\n");
		return 1;
	}
	printf("Noi dung cua FILE: \n");
	while(fgets(input,sizeof(input),file)!=NULL){
		printf("%s\n",input);
	}
	fclose(file);
	return 0;
}
