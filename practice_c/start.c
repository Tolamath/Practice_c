/* Find the sum of two numbers
 *
 * Call the Header
 * Define the integer_mult(int x, int y) function
 * Write the statment block
 * return result
 * Define the main function
 * Call the integer-mult function
 * Store in sum
 * Output result
 */
 #include <stdio.h>
 int integer_mult(int x, int y){
    int result;
    result = x * y;
    return result;
 }
 int main(){
    int answer;
    answer = integer_mult(3,5);
    printf("The result of multiplying 3 by 5 is: %i\n", answer);
    return 0;
 }


