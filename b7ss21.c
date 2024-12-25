#include<stdio.h>
#include <string.h>

	typedef struct{
		int id;
		char name[50];
		int age;
	} SinhVien;
	
int main(){
	int n;
	char c;
	printf("Moi ban nhap so luong sinh vien: ");
	scanf("%d", &n);
	SinhVien sv[100];
	for(int i=0;i<n;i++){
		printf("\nMoi ban nhap thong tin sinh vien %d\n", i+1);
		printf("ID: ");
		scanf("%d", &sv[i].id);
		getchar();
		printf("Ten sinh vien: ");
		fgets(sv[i].name,sizeof(sv[i].name), stdin);
		sv[i].name[strcspn(sv[i].name,"\n")]='\0';
		printf("Tuoi sinh vien: ");
		scanf("%d", &sv[i].age);
	}
	FILE *file;
	file=fopen("students.txt", "w");
	if(file==NULL){
		printf("Khong the mo file");
		return  1;
	}
	for(int i=0;i<n;i++){
		fprintf(file,"%d %s %d\n", sv[i].id, sv[i].name, sv[i].age);
	}
	fclose(file);
	printf("Luu thong tin Sinh Vien thanh cong");
	return 0;
}
