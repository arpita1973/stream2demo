
#include "myemp.h"
void push(Employee **emp,int id, char *name,float sal, char * em )
{
	Employee *cur=NULL,*temp=NULL;
	cur=*emp;
	temp=malloc(sizeof(Employee));
	temp->eid = id;
	strcpy(temp->nm,name);
	temp->salary = sal;
	strcpy(temp->emp_email, em); 
	temp->next=NULL;
	
	if(cur == NULL)
	{
		*emp=temp;
	}
	else
	{
		while((cur->next) != NULL)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}

}

