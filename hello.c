#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)

{

    string s = get_string("Name: ");
    printf("Output:\n");
    int n = strlen(s);
    for(int i=0;i<n;i++)
    {

        if(s[i]>= 'a' && s[i] <='z')
        {
            printf("%c", s[i]- ('a' - 'A'));
        }
        else
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}