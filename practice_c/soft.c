#include <stdio.h>
int integer_add(int x, int y){
    int result;
    result = x+y;
    return result;
}
int main(){
    int sum;
    sum=integer_add(23,92);
    printf("The addition of 23 and 92 is: %d\n", sum);
    return 0;
}