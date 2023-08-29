#include "myemp.h"
void clean_up(Employee **emp)
{
	Employee *current, *p1;
	current = *emp;
	while( current != NULL)
	{
		p1 = current;
		current=current->next;
		free(p1);
	}
}
