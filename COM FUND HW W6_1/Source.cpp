#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char str[100];
    char* p;
    int  vCount = 0, cCount = 0,sCount = 0;

    printf("Enter text : ");
    scanf("%s",str);

    p = str;

    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') {
            vCount++;
        }
        else {
            if (*p >= 33 && *p <= 47 ) {
                sCount++;
            }
            else {
                cCount++;
            }
        }
            
        p++;
    }
    printf("Have Spacial Charactor : %d \n", sCount);
    printf("Number of Vowels in Text : %d\n", vCount);
    printf("Number of Consonants in Text : %d", cCount);
    return 0;
}