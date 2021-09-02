//using fread() function
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[11];
    fp = fopen("Mahudoom.txt","r+");
    if(fp == NULL)
    {
        printf("\n The file could not be opened. ");
    }else{
        fread(str,1,10,fp);
        str[10]='\0';
        printf("\n first 9 characters of the file are: %s",str);
        fclose(fp);
    }
}
