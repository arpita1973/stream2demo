# ifndef MYSTRING_H
# define MYSTRING_H
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee
{
	int eid;
	float salary;
	char nm[20];
	char emp_email[50];
	struct Employee *next;

}Employee;
 
void push(Employee **emp,int id, char *name,float sal, char * em);
void display(Employee **emp);
void increment(Employee **emp);
void disp_det(Employee **emp);
void clean_up(Employee **emp);
void delete_emp(Employee **emp, int id);
# endif

