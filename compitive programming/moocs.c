
//#include<stdio.h>
//char *fun(unsigned int num, int base);
//int main()
//{
//char *s;
//s=fun(128, 2);
//s=fun(128, 16);
//printf("%s\n",s);
//return 0;
//}
//char *fun(unsigned int num, int base)
//{
//static char buff[33];
//char *ptr = &buff[sizeof(buff)-1];
//*ptr = '\0';
//do
//{
//*--ptr = "0123456789abcdef"[num %base];
//num /=base;
//}while(num!=0);
//return ptr;
//}


#include<stdio.h>
//int main()
//{
//int k, num=30;
//k = (num>5 ? (num <=10 ? 100 : 200): 500);
//printf("%d\n", num);
//return 0;
//}



//void main( )
//{
//int a, b ;
//scanf ( "%d %d",a, b ) ;
//if ( a > b ) ;
//printf ( "This is a game" ) ;
//else
//printf ( "You have to play it" ) ;
//}

//void main( ) { int i = -1, j = 1, k ,l ; k = i && j ; l = i || j ; printf ( "%d %d", l, j ) ; }

//void main()
//
//{
//
//int b[] ={ 10,20,30,40,50} ;
//
//int i ;
//
//for( i =0; i<=4; i++)
//
//printf( "\n%d" *( b+i ) ) ;
//
//}

//void main( ) 
//
//{ 
//
//int x = 1 ; 
//
//while ( x == 1 ) 
//
//{ 
//
//x = x - 1 ; 
//
//printf ( " %d", x ) ; 
//
//} 
//}

//void main( ) 
//
//{ 
//
//int i ; 
//
//for ( i = 1 ; i <= 5 ; printf ( " %d", i ) ) ; 
//
//i++ ; 
//
//}


//int main()
//{
//unsigned int m[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
//unsigned char n, i;
//scanf("%d", &n);
//for(i=0; i<=7; i++)
//{
//if(n & m[i])
//printf("yes");
//}
//return 0;
//}


//int main()
//{
//int i=-3, j=2, k=0, m;
//m = ++i || ++j && ++k;
//printf("%d, %d, %d, %d\n", i, j, k, m);
//return 0;
//}


//int main()
//{
//static int a[20];
//int i = 0;
//a[i] = i ;
//printf("%d, %d, %d\n", a[0], a[1], i);
//return 0;
//}


//void main( )
//{
//int x = 15 ;
//printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ;
//}


//void main( )
//{
//int x = 3, y, z ;
//y = x = 10 ;
//z = x < 10 ;
//printf ( "\nx = %d y = %d z = %d", x, y, z ) ;
//}


//void main()
//{
//      int i=1;
//      switch(i<<2+i)
//{
//         default:
//printf("Default Case");
//         case 4:
//printf(" Case 4");
//         case 8:
//printf(" Case 8");
//         case 5:
//printf(" Case 5");
//      }
//}

//void main ( )
//{
//int c = 3 ;
//switch ( c )
//{
//case 'v' :
//printf ( "I am in case v \n" ) ;
//break ;
//case 3 :
//printf ( "I am in case 3 \n" ) ;
//break ;
//case 12 :
//printf ( "I am in case 12 \n" ) ;
//break ;
//default :
//printf ( "I am in default \n" ) ;
//}
//}



//int main()
//{
//int i=22;
//switch (i)
//{
//case 121:
//printf("I am in case 121\n");
//break;
//case 7:
//printf("I am in case 7\n");
//break;
//case 22:
//printf("I am in case 22\n");
//break;
//default:
//printf("I am in default\n");
//break;
//}
//return 0;
//}

//void main()
//{
//	printf("%d",!1);
//}


//void main( )
//{
//float a = 3.5 ;
//switch ( a )
//{
//case 0.5 :
//printf ( "\nThe art of C" ) ;
//break ;
//case 1.5 :
//printf ( "\nThe spirit of C" ) ;
//break ;
//case 2.5 :
//printf ( "\nSee through C" ) ;
//break ;
//case 3.5 :
//printf ( "\nSimply c" ) ;
//}


//void main()
//{
//	int i=-3,j=3;
//	if(!i + !j*1)
//	printf("\n adhgdh");
//	else
//	printf("\n hjhjhj");
//}



//void main( ) 


//int main()
//{
//unsigned int a=0xffff;
//~a;
//printf("%x\n", a);
//return 0;
//}



//int main()
//{
//	while('a'<'b')
//	{
//		printf("\n hkjhkh");
//	}
//}


//int main()
//{
//unsigned int m[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
//unsigned char n, i;
//scanf("%d", &n);
//for(i=0; i<=7; i++)
//{
//if(n & m[i])
//printf("yes");
//}
//return 0;
//}


