//A cybersecurity monitoring system generates raw log entries in Comma-Separated Values (CSV)
//format. A sample log string looks like:
//
//8
//
//&quot;Admin_User,Access Granted,10:45AM&quot;
//You are tasked with writing a C parser that extracts individual data fields separated by commas.
//1. Prompt the user to enter 3 CSV log entries.
//2. Use a single scanf statement with Negated Scanset %[^,] to split each log entry into three distinct
//strings (username, status, and timestamp).
//3. Store these fields across a 2D character array char logs[3][30].
//4. Using Nested Loops, iterate character-by-character through all stored strings and count the total
//number of uppercase letters (A-Z) across the entire log matrix. Print the final count.

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char char_logs[3][3][30];
	int uppercount = 0;
	int i = 0;
	int k =0;
	int j=0;

	for(i=0;i<3;i++) {
		printf("enter your Csv value:");
		scanf(" %29[^,],%29[^,],%29[^\n]", char_logs[i][0], char_logs[i][1], char_logs[i][2]);
	}
		for(i=0;i<3;i++) {
			for(j=0;j<3;j++){
				for(k=0;char_logs[i][j][k] !='\0';k++) {
					if(char_logs[i][j][k]>='A' && char_logs[i][j][k]<='Z') {
						uppercount++;
					}
				}
			}
	}
	printf("Total Upper Case letters are: %d",uppercount);
}
