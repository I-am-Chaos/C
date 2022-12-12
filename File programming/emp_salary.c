#include <stdio.h>
#include <stdlib.h>
int i;
struct emp
{
    char name[30];
    int age;
    float salary;
};
void main()
{
    system("cls");
    struct emp e;
    FILE *fp ;
    fp = fopen("D:\\salary.txt","w");
    for (i=1;i<=2;i++)
    {
        printf("\nEnter your name , age and salary\n");
        scanf("%s%d%f",&e.name,&e.age,&e.salary);
        fwrite(&e,sizeof(e),1,fp);
    }
    fclose(fp);
    float max = 0.0;
    fp = fopen("D:\\salary.txt","r");
    while(fread(&e,sizeof(e),1,fp)!=EOF)
    {
        if (max < e.salary)
        max = e.salary;
    }
    rewind(fp);
    while(fread(&e,sizeof(e),1,fp)!=EOF)
    {
        if (max == e.salary)
        printf("%s%d%f",e.name,e.age,e.salary);
    }
    fclose(fp);
}