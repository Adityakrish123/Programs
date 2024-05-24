#include <stdio.h>

	void function1(char *str)
{
 if(*str)
 {
 function1(str+1);
 printf("%c",*str);
 }
}
int main()
{
 char str1[]={"test mail yes"};
 function1(str1);
 return 0;
}

