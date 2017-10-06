#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int l,i,j=0;
char a[20],b[20];
clrscr();
gets(a);
strcpy(b,a);
printf("b%s \n",b);
strrev(a);
printf("the reverse %s \n",a);
l=strlen(a);
printf("length %d \n",l);
for(i=l;b[j]!='\0';i++,j++)
{
a[i]=b[j];
}
puts(a);
getche();
}


