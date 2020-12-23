#include<stdio.h>
int main()
{
int a[3][3];
char b[][50]={"First","Second","THird"};
int i,j;

for(i=0;i<3;i++)
{
    printf("Enter %s Column \n ",b[i]);
    printf("------------------\n");
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("Answer Is:");
printf("\n---------");
for(i=0;i<3;i++)
{
    printf("\n");
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[j][i]);
    }
}

}