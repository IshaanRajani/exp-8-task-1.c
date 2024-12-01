/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

   wap to find the length of a string without using library function*/
#include <stdio.h>

int findStringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = findStringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
/*output:
        Enter a string: ishaan
The length of the string is: 7
*/
