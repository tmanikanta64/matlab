#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char text [30];
fp=fopen("apple.txt","a+");
printf("enter text here:");
gets(text);
fprintf(fp,"%s",text);
fclose(fp);
}
