#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,i,j,temp;
      printf("Enter the number of elements ");
      scanf("%d",&n);
      p=(int *)malloc(n *sizeof(int));
      printf("\nEnter %d Numbers: \n",n);
      for(i=0;i<n;i++)
      {
            scanf("%d", p+i);
      }
      for(i=0;i<n;i++)
      {
            for(j=0;j<=i;j++)
            {
                  if(*(p+i)<*(p+j))
                  {
                        temp=*(p+i);
                        *(p+i)=*(p+j);
                        *(p+j)=temp;
                  }
            }
      }
      printf("\n After sorting the array is ");
      
      for(i=0;i<n;i++)
      {
      	printf("%d ",*(p+i));
  	  }
  	  
      free(p);
      
      return 0;
}
