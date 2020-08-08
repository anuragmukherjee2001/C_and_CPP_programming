    #include<stdio.h>
//    #include<conio.h>
    void large(int x, int y)
    {
     int  *large, *xptr,*yptr;
//    clrscr();
//    printf("Enter the value of x and y :");
//    scanf("%d%d",&x,&y);
    xptr=&x;
    yptr=&y;
    if(*xptr>*yptr)
    large=xptr;
    else
    large=yptr;
    printf("The larger nmuber is : %d",*large);
//    getch();
    }
    
    void main()
    {
    	int a,b;
    printf("Enter the value of two numbers :");
    scanf("%d%d",&a,&b);
    large(a,b);
	}
