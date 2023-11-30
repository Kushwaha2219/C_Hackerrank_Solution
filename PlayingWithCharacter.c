#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char str[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",str);//taking a string untill first whitespace occur
    scanf("\n");
    scanf("%[^\n]%*c", &sen);//taking full sentence
    printf("%c\n%s\n%s",ch,str,sen);
    return 0;
}
