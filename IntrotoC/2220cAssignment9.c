#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CIPHER_SIZE 52

typedef struct{
	char originalCharacter;
	char cipherCharacter;
} Cipher;

void ReadCipherFile(Cipher* cipherArray){
	FILE* fp;
	int i = 0;
	fp = fopen("cipher.txt", "r");
	while (!feof(fp)){
		cipherArray[i].originalCharacter = fgetc(fp);
		cipherArray[i].cipherCharacter = fgetc(fp);
		fgetc(fp);
		i++;
	}
}

char CipherSub(char in, const Cipher* cipherArray){
	int i;
	for (i = 0; i < CIPHER_SIZE; i++){
		if (in == cipherArray[i].originalCharacter){
			return cipherArray[i].cipherCharacter;
		}
	}
	return -1;
}

void ProcessCipher(char* input, char* output, const Cipher* cipherArray){
	int i = 0;
	for(i = 0; i < strlen(input); i++){
		if (CipherSub(input[i], cipherArray) == -1){
			output[i] = input[i];
		}
		else{
			output[i] = CipherSub(input[i], cipherArray);
		}
	}
	output[i] = '\0';
}

void ProcessFiles(FILE* fIn, FILE* fOut, const Cipher* cipherArray){
	char bufferIn[10000];
	char bufferOut[10000];

	while (!feof(fIn)){
		fgets(bufferIn, 10000, fIn);
		ProcessCipher(bufferIn, bufferOut, cipherArray);
		fputs(bufferOut,fOut);
	}
}

void main(){
	Cipher cipherArray[CIPHER_SIZE];
	FILE* fIn = 0;
	FILE* fOut = 0;
	char fileNameIn[1000];
	char fileNameOut[1000];

	ReadCipherFile(cipherArray);
	
	printf("Enter the file to input: ");
	gets(fileNameIn);
	printf("Enter the file to output: ");
	gets(fileNameOut);

	fIn = fopen(fileNameIn, "r");
	fOut = fopen(fileNameOut, "w");

	ProcessFiles(fIn, fOut, cipherArray);

	fclose(fIn);
	fclose(fOut);
	
	system("pause");
}
