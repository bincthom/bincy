#include<stdio.h>
size_t my_strlen(char *s)
{
char *p = s;
while(*p)
++p;
return (p -s);
}
int main(void)
{
int i;
char *s[]=
{
"Git tutorials",
"bincy"
};
for(i=0;i<2;++i)
printf("String length of %s=%1u\n", s[i],my_strlen(s[i]));
return 0;
}

