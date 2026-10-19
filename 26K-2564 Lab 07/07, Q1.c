//1. A university department requires a C program to register student details. Since students often have
//multi-word full names (e.g., &quot;Muhammad Ali Khan&quot;), standard scanf(&quot;%s&quot;) fails because it stops
//reading at the first space.
//a. Declare a 2D character array char student_names[3][50] to store the full names of 3 students.
//b. Declare a 2D integer array int marks[3][3] to store 3 subject marks for each student.
//c. Use Negated Scanset %[^\n] along with scanf to input multi-word names for each student
//(clearing the buffer appropriately between inputs).
//d. Use Nested Loops to:
//i. Input 3 subject marks for each student.
//e. Calculate and display each student&#39;s average marks alongside their full name in a formatted
//report.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
	char student_names[3][50];
	int marks[3][3];
	int i=0;
	int j=0;
	float average= 0;
	float sum = 0.0;
	
	for(i=0;i<3;i++) {
		printf("Enter your name:");
		scanf(" %49[^\n]",student_names[i]);
		
		for(j=0;j<3;j++) {
			printf("Enter your marks:");
			scanf("%d", &marks[i][j]);	
		}
	}
	printf("\nReport:\n");
	for(i=0;i<3;i++) {
		sum = 0;
		for(j=0;j<3;j++) {
			sum = sum + marks[i][j];
			
		}
			average= sum/3.0;
			
			printf("Student: %s | Average Marks: %f\n",student_names[i],average);
			printf("-----------------------------------------------------------\n");
	}	
	printf("\n--------------End Report------------------");
}
