/* 
6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.
*/

#include<stdio.h>
void countCharacters(char str[]);
main()
{
	
	
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s",&str);
    
    countCharacters(str);
}

void countCharacters(char str[]) {
    int c=0, d=0, sc=0;
    int i;
    

    for(i=0;str[i] != '\0';i++) 
    {
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            c++;
        }
        
        else if (str[i] >= '0' && str[i] <= '9') {
            d++;
        }
        else {
            sc++;
        }
    }
    
    printf("Total alphabets: %d\n",c);
    printf("Total digits: %d\n", d);
    printf("Total special characters: %d\n", sc);
}

