//An intelligence agency uses a messaging portal that only permits uppercase English letters and
//spaces (e.g., &quot;TOP SECRET MISSION&quot;). Any digits or special symbols entered by mistake should
//be automatically truncated during input scanning.
//1. Declare a 2D string array char secret_messages[3][100] to store 3 encrypted lines of text.
//2. Read user input using Validation Scanset %[A-Z ] so that scanning automatically stops as
//soon as an invalid character (like numbers or punctuation) is encountered.
//3. Using Nested Loops:
//o Outer loop iterates through each message row.
//o Inner loop traverses the string to count total spaces and determine the number of
//words in each valid message.
//
//4. Display the filtered messages and their respective word counts.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main() {
	char secret_messages[3][100];
	int i=0;
	int k=0;
	int spacecount = 0;
	int wordcount = 1;
	for(i=0;i<3;i++) {
		spacecount = 0;
		wordcount = 1;
		printf("\nwrite ur message: ");
		scanf(" %[A-Z ]",secret_messages[i]);
		scanf("%*[^\n]");
		scanf("%*c");
		for(k=0;secret_messages[i][k] != '\0';k++) {
			if(secret_messages[i][k]== ' ') {
				spacecount++;
			}
			
			if( k>0 && secret_messages[i][k-1] == ' '){
				wordcount++;
			}
		}	
		printf("the filtered message is: %s\n", secret_messages[i]);
		printf("Total spaces: %d\n",spacecount);
		printf("Total words: %d\n",wordcount);
	}
	
}
