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
	//TODO
	const int MAX_EMPLOYEES = 2;
	//int i = 0;

	Employee employee[MAX_EMPLOYEES];

	char* employeeName = malloc(20*sizeof(int));
	//int salary;

	for(int i = 0; i < MAX_EMPLOYEES; i++){
		//printf("i: %d  \n",i);
		printf("Name: ");
		//printf("HERE");
		//fgets(employee[i].name,MAX_EMPLOYEES,stdin);
		//int nameSize = 0;
		scanf("%s", employeeName);
		// while(*employeeName == '\0'){
		// 	nameSize++;
		// 	employeeName++;
		// }
		// if(nameSize > MAX_NAME_LEN){
		// 	printf("Too long of name... try again...");
		// 	printf("Name: ");
		// 	scanf("%s", employeeName);
		// }
		//printf("Employee Name: %s", employee[i].name);
		printf("Salary: ");
		scanf("%d", &employee[i].salary);
		//scanf("%s","");
		//printf("Salary of employee: %d", employee[i].salary);


		//employee[i].name = employeeName;
		printf("\n");
	}

	//printf("Getting heap sort");
	heapSort(employee,MAX_EMPLOYEES);
	//printf("Printing the list");
	printList(employee,MAX_EMPLOYEES);

	return 0;
}
