/* 
7. WAP Find out length of string without using inbuilt function
 */

#include<stdio.h>
int stringLength(char *str);
main()
{
	
	
	char str[50];
    
    printf("Enter a string: ");
    scanf("%[^\n]",&str);

    int length = stringLength(str);
    printf("\n\n\t Length of the string: %d", length);
}
int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
