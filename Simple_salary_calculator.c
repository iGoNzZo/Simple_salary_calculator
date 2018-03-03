#include <stdio.h>

int hoursWorked;
float wage;
float salary;

main(void)	{

	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hoursWorked);
	
	while(hoursWorked != (-1))	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &wage);
		
		salary = hoursWorked * wage;
		
		printf("Salay is $%.2f\n", salary);
		
		printf("\n");
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hoursWorked);
	}
}
