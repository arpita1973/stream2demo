#include "myemp.h"
void increment(Employee **emp)
{
	Employee *temp = NULL;
	temp = *emp;
	while(temp != NULL)
	{
		if(temp->salary < 20000)
		{
			temp->salary += (temp->salary * 0.1);
		}
		temp = temp->next;
	}
}
