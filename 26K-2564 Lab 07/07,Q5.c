//A text-editing tool allows users to enter multiple sentences in a single paragraph separated by
//semicolons (;), for example:
//&quot;Learn C programming; Nested loops are powerful; Practice daily&quot;
//The system must parse these sentences into separate rows and analyze their vowel density.
//1. Declare a 2D character array char sentences[3][100].
//2. Read a paragraph containing 3 semicolon-separated sentences using Negated Scanset %[^;]
//inside a loop, using %*c to discard the semicolon delimiter from the input buffer.
//3. Store each extracted sentence into its respective row in the 2D array.
//4. Write Nested Loops (Outer loop for rows, Inner loop for string characters) to count and display
//the number of vowels (a, e, i, o, u, case-insensitive) present in each individual sentence.

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <limits.h>

int main() {
	char sentences[3][100];
	int i;
	int j;
	printf("Enter a para with 3 sentences seperated by semicolons:");
	
	
	
	
	for(i=0;i<3;i++) {
		
		scanf(" %99[^;\n]%*c",sentences[i]);
	}
	printf("\n--Vowel Report--\n");
	for(i=0;i<3;i++) {
		
		int vowels = 0;
	for(j=0;sentences[i][j] != '\0';j++) {
		char ch =sentences[i][j];
		if(ch== 'a'|| ch == 'e' || ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E' || ch== 'I' ||
		ch == 'O'|| ch =='U') {
			vowels++;
		}
	}
	
	printf("Sentence %d: %s", i+1,sentences[i]);
	printf("vowels     :%d\n\n",vowels);


	}


}
