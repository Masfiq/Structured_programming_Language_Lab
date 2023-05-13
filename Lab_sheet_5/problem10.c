#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char input;
    printf("Input a character : ");
    scanf("%c", &input);

    if (isVowel(input))
    {
        printf("The character is Vowel");
    }
    else
    {
        printf("The character is Consonant");
    }
}