#include <stdio.h>
int main(){
char c1;
printf("Input the character of the ascii code you want to convert to number:");
c1=getc(stdin);
printf("The numeric value of the ascii code is: %d\n", c1); 
return 0;
}