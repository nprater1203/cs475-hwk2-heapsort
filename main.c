#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "employee.h"
#include "heap.h"

/*
	Name: Nicholas Prater
	Course: CS 481 OS
	Professor: Dr. Chiu
	Date: 1/30/23
*/

int main(int argc, char *argv[])
{
	const int MAX_EMPLOYEES = 5;
	Employee employee[MAX_EMPLOYEES];
	char* employeeName = malloc(20*sizeof(int));

	// Prompt the MAX_EMPLOYEES times for employees' names and salaries
	for(int i = 0; i < MAX_EMPLOYEES; i++){
		printf("Name: ");

		// Only allow MAX_NAME_LEN of chars for employees' names
		scanf("%s", employeeName);
		strncpy(employee[i].name,employeeName,MAX_NAME_LEN);

		printf("Salary: ");
		scanf("%d", &employee[i].salary);
		printf("\n");
	}

	heapSort(employee,MAX_EMPLOYEES);
	printList(employee,MAX_EMPLOYEES);

	free(employeeName);

	return 0;
}
