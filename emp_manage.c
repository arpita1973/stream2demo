#include "myemp.h"
int main()
{
	Employee *emp=NULL;
	int choice,d_emp,id;
	float sal;
	char name[23], email[20];
	while(1)
	{
		printf("\n----MENU--------------\n");
		printf("1 :: Add employee\n");
		printf("2 :: Display\n");
		printf("3 :: Display details greater then 25000\n");
		printf("4 :: Increment salary\n");
		printf("5 :: Delete employee\n");
		printf("0 :: Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter employe id: ");
				scanf("%d",&id);
				printf("Enter employe name: ");
				scanf("%s",name);
				printf("Enter employe salary: ");
				scanf("%f",&sal);
				printf("Enter employe email: ");
				scanf("%s",email);
				
				push(&emp,id,name,sal,email);
				break;
			case 2:
				display(&emp);
				break;
			case 3:
				printf("\n\nDisplaying details of employee with salary greater than 25000\n");
				disp_det(&emp);
				break;
			case 4:
				increment(&emp);
				display(&emp);
				break;
				
			case 5:
				printf("Enter the emp ID to delete :: ");
				scanf("%d",&d_emp);
				delete_emp(&emp,d_emp);
				printf("%d is deleted\n",d_emp);
				break;
			case 0:
				printf("EXIT\n");
				clean_up(&emp);
				exit(0);
			}
		}
		return 0;
	}				
				
				
				
				
				
				
