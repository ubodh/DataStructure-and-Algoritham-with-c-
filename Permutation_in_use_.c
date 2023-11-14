#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *s,char *ss)
{
    char *temp;
    *temp=*s;
    *s=*ss;
    *ss=temp;

}
void permutation(char *str,int i,int n)
{
    static int count ;int j;

    if(i==n)
    {
        count++;
        printf("%d %s\t",count ,str);
    }
    for(j=i;j<=n;j++)
    {
        swap((str+i),(str+j) );
        permutation(str,i+1,n);
        swap((str+i),(str+j) );
    }
}
void main()
{
//    char str="ABC";
    char *str;
    gets(str);
 permutation(str,0,strlen(str)-1);
}
