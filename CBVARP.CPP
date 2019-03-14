#include<stdio.h>
#include<conio.h>

void swap(int a, int b)
{int temp;
 temp=b;
 b=a;
 a=temp;   
}
 
void main()
{int x,y;
 clrscr();
 printf("Arpita Tripathy,Rollno 02\n");
 printf("Enter the value of x and y\n");
 scanf("%d%d",&x,&y);
 printf("Before Swapping\nx = %d\ny = %d\n",x,y);
 swap(x,y);
 printf("After Swapping\nx = %d\ny = %d\n",x,y);
 getch();
}
 

 
