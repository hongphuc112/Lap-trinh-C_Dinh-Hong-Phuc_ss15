#include <stdio.h>
#include <string.h>
#include<ctype.h>
void countWord(char chuoi[]);
int main() {
    char chuoi[100];
    printf("Nhap chuoi:");
    fgets(chuoi, 100, stdin);
    countWord(chuoi);
    return 0;
}
void countWord(char chuoi[]) {
    int count[256] = {0};  
    for (int i = 0; chuoi[i] != '\0'; i++) {
    	if(isalpha(chuoi[i])){
    		count[(unsigned char)chuoi[i]]++;
		}
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", (char)i, count[i]);
        }
    }
}

