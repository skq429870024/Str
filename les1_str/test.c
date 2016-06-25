#include <stdio.h>
#include <stdlib.h>
#include "str.h"
int main()
{
    char str1[20] = "i love you";
    char str3[20] = "i love you";
    char *str2 = "caonima";
    char str4[20] = "i lo";
    char str5[20] = "i lo";
    char *temp_strcopy,*temp_strncopy;
    char *temp_strcat,*temp_strncat;
    int i,j,k;
    temp_strcopy = mystrcopy(str1,str2);
    temp_strncopy = mystrncopy(str4,str2,3);
    temp_strcat = mystrcat(str3,str2);
    temp_strncat = mystrncat(str5,str2,4);
    i = mystrlen(str1);
    j = mystrcmp(str1,str2);
    k = mystrncmp("dbc",str2,3);
    printf("%s\n%s\n%s\n%s\n%d\n%d\n%d\n",temp_strcopy,temp_strncopy,temp_strcat,temp_strncat,i,j,k);
    return 0;
   }
