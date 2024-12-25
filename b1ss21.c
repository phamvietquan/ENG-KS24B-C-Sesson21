#include <stdio.h>

int main() {
    char input[1000]; 
    printf("Nhap mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin);
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file da ghi.\n");
        return 1;
    }
    fprintf(file, "%s", input);
    fclose(file);
    printf("da ghi chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}

