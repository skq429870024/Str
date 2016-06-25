#include <stdio.h>
#include <stdlib.h>
#include "str.h"
char *mystrcopy(char *dest,const char *src)
{
    char *temp=dest;
    if(dest==NULL||src==NULL)
       return NULL;
    while(*src)
    { 
       *temp++=*src++;
    }
   *temp ='\0';
   return dest;
}

char *mystrncopy(char *dest,const char *src,int i)
{   
    char *temp = dest;
    int j=1;
    if(dest==NULL||src==NULL||i==0)
       return NULL;
    while(*src&&j<=i)
    {
       j++;
       *temp++=*src++;
    }
    if(*src=='\0'&&j<=i)
       *temp='\0';
    return dest;
}
 
char *mystrcat(char *dest,const char *src)
{  
   char *temp= dest;
   while(*temp)
   { 
     temp++;
   }
   while(*src)
   {
     *temp++ = *src++;
   }
   *temp ='\0';
   return dest;
}

char *mystrncat(char *dest,const char *src,int i)
{
   int j=1; 
   char *temp =dest;
   while(*temp)
   {
     temp++;
   }
   while(*src&&j<=i)
   {
     *temp++ = *src++;
     j++;
   }
   *temp = '\0';
   return dest;
}

int mystrlen(const char *src)
{
  int i=0;
  while(*src++)
  {
    i++;
  }
  return i;
}

int mystrcmp(const char *dest,const char *src)
{
  while((*dest++-*src++)==0)
  {
    if(*dest=='\0'&&*src=='\0')
       return 0;
  }
  if(*dest-*src>0)
   return 1;
  else 
   return -1;
}

int mystrncmp(const char *dest,const char *src,int i)
{
   int j=1;
   while((*dest-*src)==0&&j<=i)
   {
     j++;
     dest++;
     src++;
     if(*dest=='\0'&&*src=='\0')
        return 0;
   }
   if(*dest-*src>0)
     return 1;
   else if (*dest-*src==0)
     return 0;
   else if (*dest-*src<0)
    return -1;
}






