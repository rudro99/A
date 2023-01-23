#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,n;
    printf("Enter the string: ");
    scanf("%[^\n]%*c",str);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='%'||str[i]=='/')
            printf("\n%c is the arithmetic operator",str[i]);
    }
     printf("\nno operator here");

}
