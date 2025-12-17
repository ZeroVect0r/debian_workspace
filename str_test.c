#include <stdio.h>
#include <string.h>

int main()
{
        char str1[] = "Hello";
        str1[0]     = 'h';

        char* str2  = "NJU";

        printf("length: %lu\n", strlen(str1));
        printf("occupy: %lu\n", sizeof(str1));

        char buffer[20] = "Hello";
        strcat(buffer, " Linux");
        printf("after strcat: %s\n", buffer);

        return 0;
}
