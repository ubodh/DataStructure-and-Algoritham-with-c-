#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *x, char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void permutation(char *s,int i,int n)
{
    static int count;
    int j;
    if(i==n)
    {
        count++;
        //printf("(%d )%s \t",count,s);
        printf("%s\t",s);
    }
    else
        for(j=i;j<=n;j++)
    {
        swap(*(s+i),*(s+j));
        permutation(s,i+1,n);
        swap(*(s+i),*(s+j));
    }
}
void main()
{
    char *s;
    printf("Enter a string");
    gets(s);
    permutation(s,0,strlen(s)-1);
    getch();
}
