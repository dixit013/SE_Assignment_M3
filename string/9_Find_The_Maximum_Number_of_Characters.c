/*9. Write a program in C to find the maximum number of characters in a string. */
#include<stdio.h>
main()
{
	
	char str[100];
    int max_c = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate over the string to find the maximum number of characters
    int i = 0;
    while (str[i] != '\0') {
        i++;
        max_c++;
    }
    printf("Maximum number of characters in the string: %d\n", max_c);
}

