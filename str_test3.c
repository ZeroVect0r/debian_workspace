#include<stdio.h>
void capslock(char* str)
{
        const int delta = 32;
        for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 97 && str[i] <= 122)
                        str[i] -= 32;
                //
        }
}

int main()
{
        char str[10];
        printf("ENTER");
        fgets(str, 10, stdin);
        capslock(str);
        printf("the new string: %s\n", str);
}
