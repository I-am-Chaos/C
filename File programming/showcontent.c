#include <stdio.h>
#include <stdlib.h>
void main()
{
    system ("cls");
    char str[50],ch;
    FILE *fp;
    fp = fopen ("D:\\newfile.txt","w");
    if (fp == NULL)
    {
        puts ("Cannot open file");
        exit(0);
    }
    printf("\nEnter a string: ");
    gets(str);
    fprintf(fp,"%s",str);
    //fputs(str,fp);
    fclose (fp);
    fp = fopen ("D:\\newfile.txt","r");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }
    while ((ch = fgetc(fp))!= EOF)
    {
        printf("%c",ch);
        //putc(ch,stdout);
    }
    fclose (fp);
}