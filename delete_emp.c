#include "myemp.h"

void delete_emp(Employee **emp, int id)
{
	Employee *cur, *prev=NULL;
	cur = *emp;
	
	while(cur != NULL && cur->eid != id)
	{
		prev = cur;
		cur = cur->next;
		
	}
	if(cur == NULL)
	{
		printf("EMPTY\n");
	}
	if(prev == NULL)
	{
		*emp = cur->next;
	}
	else
	{
	
		prev->next = cur->next;
	}
	free(cur);
}
	
