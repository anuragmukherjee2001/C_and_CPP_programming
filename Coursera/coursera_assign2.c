#include<stdio.h>

typedef enum month {jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec}; //declaring with typedef

typedef struct{
	month m;
	int d;
};

int main()
{
	printf("\n hello");
	return 0;
}

void print_month(enum month m)
{
	case jan:
	printf("January");
	case feb:
	printf("February");
	case mar:
	printf("March");
	case apr:
	printf("April");
	case may:
	printf("May");
	case june:
	printf("June");
	case july:
	printf("July");
	case aug:
	printf("August");
	case sep:
	printf("September");
	case oct:
	printf("October");
	case nov:
	printf("November");
	case dec:
	printf("December");
	default:
	printf("%d is an error",m);	
}

void next_day(int d)
{
	if(month==2)
	{
		d = 28;
	}
	else if(month == 0||month == 2||month == 4||month == 6||month == 7||month == 9||month == 11||)
	{
		d = 31;
	}
	else
	{
		d = 30;
	}
}




//#include <stdio.h>
//
///*structure declaration*/
//
//struct employee{
//
//char name[30];
//
//int empId;
//
//float salary;
//
//};
//
//int main()
//
//{
//
///*declare structure variable*/
//
//struct employee emp;
//
///*read employee details*/
//
//printf("\nEnter details :\n");
//
//printf("Name ?:"); gets(emp.name);
//
//printf("ID ?:"); scanf("%d",&emp.empId);
//
//printf("Salary ?:"); scanf("%f",&emp.salary);
//
///*print employee details*/
//
//printf("\nEntered detail is:");
//
//printf("Name: %s" ,emp.name);
//
//printf("Id: %d" ,emp.empId);
//
//printf("Salary: %f\n",emp.salary);
//
//return 0;
//
//}


