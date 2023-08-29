#include "myemp.h"
void display(Employee **emp)
{
	Employee * temp = *emp;
	while(temp != NULL)
	{
		printf("\nEmployee ID: %d\n", temp->eid);
		printf("Employee Name: %s\n", temp->nm);
		printf("Employee Salary: %.2f\n", temp->salary);
		printf("Employee Email: %s\n", temp->emp_email);
		temp = temp->next;
	}
}
