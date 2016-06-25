#ifndef STR_H__
#define STR_H__
char *mystrcopy(char *dest,const char *src);
char *mystrncopy(char *dest,const char *src,int i);
char *mystrcat(char *dest,const char *src);
char *mystrncat(char *dest,const char *src,int i);
int  mystrncmp(const char *dest,const char *src,int i);
int  mystrcmp(const char *dest,const char *src);
int  mystrlen(const char *src);


#endif
