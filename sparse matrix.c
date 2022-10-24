/******************************************************************************
o/p:
Enter size of matrix:
3 4
Enter elements of matrix :
2 0 9 0
4 0 0 8
0 0 7 0
Entered matrix is:
2 0 9 0 
4 0 0 8 
0 0 7 0 
Given matrix is Sparse matrix
Triplet for given Sparse matrix is:
r	c	v
0	0	2
0	2	9
1	0	4
1	3	8
2	2	7

   
*******************************************************************************/

#include<stdio.h>
int main()
{
    int r,c,a[100][100];
    int count=0,k=0;     //count for zeros and k for non-zeros
    
    printf("Enter size of matrix:\n");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
              count++;
            }
            else
            {
              k++;
            }
        }
    }
    printf("Entered matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d ",a[i][j]); 
        }
        printf("\n");
    }
    if(count>(r*c)/2)
    {
        printf("Given matrix is Sparse matrix\n");
    }
    else
    {
        printf("Given matrix is not a Sparse matrix\n");
    }
    if(count>(r*c)/2)
    {   
        int p=0;
        int t[k][3];    //triplet consists of 3 colm,and rows acc to nonzeros elements
        printf("Triplet for given Sparse matrix is:\n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(a[i][j]!=0)
                {
                    t[p][0] = i;
                    t[p][1] = j;
                    t[p][2] = a[i][j];
                    p++;
                }
            }
        }
        printf("r\tc\tv\n");
        for(int i=0;i<k;i++)          //triplet having no.of rows=no.of non-zero elements
        {
            printf("%d\t%d\t%d\n",t[i][0],t[i][1],t[i][2]);
        }
    }
    
    return 0;
}
