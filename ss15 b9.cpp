#include <stdio.h>
#include <string.h>
#include <ctype.h>
void deleteWord(char chuoi[], char text);
int main() {
    char chuoi[100], text;
    printf("nhap chuoi ki tu : ");
    fgets(chuoi, 50, stdin);
    printf("nhap ki tu muon xoa: ");
    text = getchar();  
    deleteWord(chuoi, text);
    printf("chuoi sau khi xoa ki tu: %s\n", chuoi);
    return 0;
}
void deleteWord(char chuoi[], char text) {
	int j = 0;
    for(int i = 0; chuoi[i] != '\0'; i++){
        if(chuoi[i] != text) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0';
}

