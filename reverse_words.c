#include <stdio.h>
#include <string.h>

char *reverse_word(char *word);
char *divide_sntnc(char *stnc);

int main()
{
        return 0;
}

char *reverse_word(char *word)
{
        if (word == NULL) return NULL;

        int len = strlen(word);
        int left  = 0;
        int right = len - 1;

        while (left < right) {
                char temp  = word[left];
                word[left] = word[right];
                word[right]= temp;
                
                left++;
                right--;
        }
        return word;
}

