#include <stdio.h>
#include <stdlib.h>
void main()
{
    system("cls");
    int i,n,sum = 0;
    FILE *fp1 , *fp2;
    fp1 = fopen("D:\\newfile.txt","w");
    if (fp1 == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }
    printf("\nEnter 5 numbbers:\n");
    for (i=1;i<=5;i++)
    {
        scanf("%d",&n);
        fprintf(fp1,"%d\n",n);
    }
    fclose(fp1);
    fp1 = fopen("D:\\newfile.txt","r");
    if (fp1 == NULL)
    {
        puts("Cannot open file");
        exit(0);
    }
    fp2 = fopen("D:\\output.txt","w");
    while(fscanf(fp1,"%d",&n)!=EOF)
    {
        sum = sum +n;
    }
    fprintf(fp2,"%d",sum);
    fclose(fp1);
    fclose(fp2);
}