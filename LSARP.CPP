#include<stdio.h>
#include<conio.h>

void main()
{int ar[10], s, c, n;
 clrscr();
 printf("Arpita Tripathy,Rollno 02\n");
 printf("Enter the number of elements in array\n");
 scanf("%d",&n);
 printf("Enter %d integer(s)\n",n);
 for(c=0;c<n;c++)
    scanf("%d",&ar[c]);
 printf("Enter number to be searched\n");
 scanf("%d",&s);
 for(c=0;c<n;c++)
 {  if(ar[c]==s)
    {  printf("%d is present at location %d.\n",s,c+1);
       break;
    }
 }
 if(c==n)
    printf("%d not present in the array.\n",s);
 getch();
}