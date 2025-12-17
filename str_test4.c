#include<stdio.h>
#include<string.h>
int main()
{
        const int MAX = 10;
        char str[MAX];
        
        fgets(str, MAX, stdin);

        int len = strlen(str);
        int siz = sizeof(str);

        for (int i = 0, j = len - 1; i < len/2; i++, j--) {
                char temp = str[j];
                str[j]    = str[i];
                str[i]    = temp;
        }

        printf("%s", str);

        return 0;
}

void swap(char* str)
{
        
}
