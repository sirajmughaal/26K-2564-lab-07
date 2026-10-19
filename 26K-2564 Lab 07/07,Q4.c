//A puzzle game uses a 3 x3 grid where each row contains three space-separated words (e.g., &quot;cat
//elephant dog&quot;). The developer needs to evaluate the longest word present across the grid structure.
//1. Create a 2D array char word_grid[3][100] where each row holds a line of 3 space-separated
//words.
//2. Read each line from the user using the Scanset %[^\n].
//3. Write Nested Loops to tokenize/parse words from each row and store them into a structured
//format or calculate their lengths.
//4. Identify and output the word with the maximum length, along with its specific Row Index (i)
//and Column Index (j) inside the grid.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
	char word_grid[3][100];		
	int i =0;
	int k=0;
	int length= 0;
	int max = 0;
	int index =0;
	int j =0;
	int start=0;
	int col = 0;
	for(i=0;i<3;i++) {
		printf("Enter 3 words: ");
		scanf(" %99[^\n]", word_grid[i]);
		k=0;
		col =0;
		while( word_grid[i][k] != '\0') {
			while(word_grid[i][k] == ' ') {
				k++;
			}
			if(word_grid[i][k] == '\0') {
				break;
			}
			length =0;
			while(word_grid[i][k]!= ' ' && word_grid[i][k] != '\0') {
				length++;
				k++;
			}
			if(length>max) {
				j = col;
				max = length;
				index = i;
				start = k-length;
			}
			col++;
		}
	}
	printf("The max word was: %.*s\n",max, &word_grid[index][start]);
	printf("its row index was: %d\n", index);
	printf("column index: %d\n",j);
	printf("The length of the max word is: %d\n", max);
	
	return 0;
} 
