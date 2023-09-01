#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c",&ch);
    printf("%c \n",ch);
    
    char word[] = "";
    scanf("%s",&word);
    printf("%s\n",word);
    scanf("\n"); // why they said that before last statement we must use this because we read a \n character at the end of above statement
    
    char line[99]=" ";
    scanf("%[^\n]%*c",&line);
    printf("%s",line);
    
       
    return 0;
}
