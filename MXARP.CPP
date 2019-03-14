#include <stdio.h>
#include <stdlib.h>

int a[10][10],b[10][10],res[10][10],r1,c1,r2,c2,op,i,j,k;
 
void order()
{printf("Enter Order of Matrix A: ");
 scanf("%d %d",&r1,&c1);
 printf("Enter Order of Matrix B: ");
 scanf("%d %d",&r2,&c2);
}

void reada()
{printf("\nEnter Elements of Matrix A: \n");
 for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
       scanf("%d",&a[i][j]);
}
void readb()
{printf("\nEnter Elements of Matrix B: \n");
 for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
       scanf("%d",&b[i][j]);
}

void dispa()
{printf("\nDisplaying Elements of Matrix A: \n");
 for(i=0;i<r1;i++)
 {  for(j=0;j<c1;j++)
       printf("%d\t",a[i][j]);
    printf("\n");
 }
}
void dispb()
{printf("\nDisplaying Elements of Matrix B: \n");
 for(i=0;i<r2;i++)
 {  for(j=0;j<c2;j++)
       printf("%d\t",b[i][j]);
    printf("\n");
 }
}

void sum()
{printf("\nAdding Matrices A and B: \n");
 for(i=0;i<r1;i++)
 {  for(j=0;j<c2;j++)
    {  res[i][j]=a[i][j]+b[i][j];
       printf("%d\t",res[i][j]);
    }
    printf("\n");
 }
}

void sub()
{printf("\nSubtracting Matrices A and B: \n");
 for(i=0;i<r1;i++)
 {  for(j=0;j<c2;j++)
    {  res[i][j]=a[i][j]-b[i][j];
       printf("%d\t",res[i][j]);
    }
    printf("\n");
 }
}

void prod()
{printf("\nMultiplying Matrices A and B: \n");
 for(i=0;i<r1;i++)
 {  for(j=0;j<c2;j++)
    {  res[i][j]=0;
       for(k=0;k<c1;k++)
	  res[i][j]=res[i][j]+a[i][k]*b[k][j];
    }
 }
 for(i=0;i<r1;i++)
 {  for(j=0;j<c2;j++)
       printf("%d\t",res[i][j]);
    printf("\n");
 }
}

void trans()
{printf("\nTransposing Matrix A: \n");
 for(i=0;i<r1;i++)
 {  for(j=0;j<c1;j++)
    {  res[i][j]=a[j][i];
       printf("%d\t",res[i][j]);
    }
    printf("\n");
 }
}

void main()
{clrscr();
 printf("Arpita Tripathy,Rollno 02\n");
 printf("1.Add\t2.Subtract\t3.Multiply\t4.Transpose");
 scanf("%d",&op);
 switch(op)
 {  case 1:
       order();
       if(r1!=r2 && c1!=c2)
	  printf("Matrices can't be added!");
       else
       {  reada();
	  readb();
	  dispa();
	  dispb();
	  sum();
       }
       break;
    case 2:
       order();
       if(r1!=r2 && c1!=c2)
	  printf("Matrices can't be subtracted!");
       else
       {  reada();
	  readb();
	  dispa();
	  dispb();
	  sub();
       }
       break;
    case 3:
       order();
       if(r1!=c2)
	     printf("Matrices can't be multiplied!");
       else
       {  reada();
	  readb();
	  dispa();
	  dispb();
	  prod();
       }
       break;
    case 4:
       printf("Enter Order of Matrix A: ");
       scanf("%d %d",&r1,&c1);
       reada();
       dispa();
       trans();
       break;
    default: printf("\nInvalid Option!");
 }
 getch();
}