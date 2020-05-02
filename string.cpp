#include <stdio.h>
#include <string.h>
int main()
{     

char str[10] = "hello"; char *str1 = "world"; 

strncat(str, str1, 9); 

printf("%s", str); 

return 0;

}
