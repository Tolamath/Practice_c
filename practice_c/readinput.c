/*Read input using get_C function
 *
 *Call the header file
 *define tbe main function
 *initialize character
 *use the getc function and pass stdin
 *Print the output
 *return 0
 */
 #include <stdio.h>
 int main(){
    char c1;
    printf("Enter a character: \n");
    c1=getc(stdin);
    printf("The character you input is: %c\n", c1);
    return 0;
 }