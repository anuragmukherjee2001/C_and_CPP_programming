#include <stdio.h>
/* To declare month enum*/
typedef enum month{ jan, feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec} month;
/* To declare struct for date*/
typedef struct date{ month m; int d;} date;
/* To declare days for each and every month*/
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
/* To print date accordingly*/
void printdate(date dd)
{
    switch(dd.m)
    {
        case 0:printf("Jan %d",dd.d);break;
        case 1:printf("Feb %d",dd.d);break;
        case 2:printf("Mar %d",dd.d);break;
        case 3:printf("Apr %d",dd.d);break;
        case 4:printf("May %d",dd.d);break;
        case 5:printf("June %d",dd.d);break;
        case 6:printf("July %d",dd.d);break;
        case 7:printf("Aug %d",dd.d);break;
        case 8:printf("Sep %d",dd.d);break;
        case 9:printf("Oct %d",dd.d);break;
        case 10:printf("Nov %d",dd.d);break;
        case 11:printf("Dec %d",dd.d);break;
        case 12:printf("Jan %d",dd.d);break;
        default:break;
        
    }
   
    
}
/* To compute nextday*/
void nextday(date dd)
{
        if(dd.d>=days[dd.m])
    {
        dd.m=dd.m+1;
        dd.d=1;
    }
    else
    {
      dd.d=dd.d+1;  
        
    }
    printdate(dd);
    
}

int main()
{
    date dd={dec,31};
    nextday(dd);
    return 0;
}
