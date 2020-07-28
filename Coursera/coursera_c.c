#include<stdio.h>
//
//int mystery(int p, int q){
//     
//    int r;
//    if ((r = p % q) == 0)
//        return q; 
//    else return mystery(q, r);
//}
int main()
{
	char a[5] = "abcd";
	char *str = &a[0];
	printf("%c",*str);
}

