#include<stdio.h>
#include<string.h>

int main()
{
        char str[80];
        printf("ENTER:");

        fgets(str, 80, stdin);

        int digit = 0;
        int chara = 0;
        int space = 0;
        int other = 0;
        for(int i = 0; str[i] != '\n'; i++){
                if (48 <= str[i] && str[i] <= 57) {
                        digit++;
                } else if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122)) {
                        chara++;
                } else if (str[i] == 32) {
                        space++;
                } else {
                        other++;
                }
        }

        printf("digits:%d characters:%d spaces:%d others:%d\n", digit, chara, space, other);
        return 0;
}
