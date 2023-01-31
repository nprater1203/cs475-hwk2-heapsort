/*
	Name: Nicholas Prater
	Course: CS 481 OS
	Professor: Dr. Chiu
	Date: 1/30/23
*/
void heapSort(Employee *A, int n);
void buildHeap(Employee *A, int n);
void heapify(Employee *A, int i, int heapn);
void swap(Employee *A, Employee* b);
void printList(Employee *A, int n);
void reverse( Employee *A, int start, int end);
int left_child(int i);
int right_child(int i);