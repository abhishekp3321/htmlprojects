#include<stdio.h>
int main(){
    int rows,i,j;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for (j = 1; j <=rows; j++)
        {
            if(i+j<=rows)
                printf(" ");
                else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}