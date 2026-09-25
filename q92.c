#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (count[str[i] - 'a'] > 0)
            {
                printf("%c", str[i]);
                return 0;
            }

            count[str[i] - 'a']++;
        }
    }

    printf("No repeating character");

    return 0;
}
