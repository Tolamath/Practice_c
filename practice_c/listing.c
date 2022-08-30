/* Read in a character entered by the user
 *
 * Call the header
 * Use the main function
 * Tell the user to input the character
 * Use the ch = get(stdin) to collect the character
 * Display the character with output
 * End the process
 */

#include <stdio.h>

int main(){
    int ch;
    printf("Please input a character: \n");
    ch = getc(stdin);
    printf("The character you entered is: %c\n", ch);
    return 0;
}
