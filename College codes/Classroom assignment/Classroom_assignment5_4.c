#include<stdio.h>

struct employee{
long int id;
char name[20];
float pay;
char date[10];
};

void employee_func(struct employee[]);
void employee_func(struct employee e[])
{
    int i,n;
    printf("enter the no. of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    printf("enter name of employee %d, id, pay and date of joining:\n",i+1);
    scanf("%s %ld %f %s",&e[i].name,&e[i].id,&e[i].pay,&e[i].date);
    }
    for(i=0;i<n;i++)
    {

    if(e[i].pay<=2000)
    e[i].pay=(e[i].pay)*1.2;
    else if(e[i].pay>2000 && e[i].pay<=5000)
    e[i].pay=(e[i].pay)*1.1;
       printf("\nname of employee:%s",e[i].name);
       printf("\nid:%ld",e[i].id);
       printf("\npay:%0.2f",e[i].pay); 
       printf("\ndate of joining:%s",e[i].date);
     
    }
    
} 
   int main(void)
   {
   	int n;
   	struct employee e[100];
   	
    
   	employee_func(e);
    return 0;
}
