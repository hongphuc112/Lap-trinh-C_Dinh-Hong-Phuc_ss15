#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char text[] = "tet1 tet2 tet3";
	int countCharacterText = 0;
	int countCharacterNum = 0;
	int countCharacterSpecial = 0;
	int length = strlen(text);
	int i;
	for(i = 0; i<length; i++){
		if(isalpha(text[i])){	
			countCharacterText++;
		}else if(isdigit(text[i])){
			countCharacterNum++;
		}else{
			countCharacterSpecial++;
		}
		
	}
	printf("%d chu cai \n",countCharacterText); 
	printf("%d chu so \n",countCharacterNum); 
	printf("%d chu cai dac biet \n",countCharacterSpecial); 
	
	return 0;
}
