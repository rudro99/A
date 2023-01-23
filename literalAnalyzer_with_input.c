#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int main()
{
    char string[5000], c = ' ';         // c empty হিসেবে initialize করা
    printf("Enter a string: ");
    gets(string);                // input এর শেষে null character দিয়ে string বানিয়ে নেওয়া

    printf("\n\n\nString Literal:\n\n");

    for(int i=0; i<strlen(string); i++)
    {
        if(string[i] == '"')
        {
            i++;
            while(string[i] != '"')
            {
                printf("%c", string[i]);
                i++;
            }
            printf("\n");
        }
    }
}
