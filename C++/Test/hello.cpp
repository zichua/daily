#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *p) 
{ 
        p = (char *)malloc(100); 
} 
void Test(void) 
{ 
        char *str = NULL; 
        fun(str); 
        strcpy(str, "hello world"); 
        printf(str); 
} 
int main()
{
	Test();
   
   return 0;
}