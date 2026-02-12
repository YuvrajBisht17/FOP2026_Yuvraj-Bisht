#include <stdio.h>
int main() {
    int num2;

    int old_div=1;
    int new_div;
    printf("enter first number=");
    scan("%d",&num1);

    printf("enter second number=");
    scanf("%d",num2);

    for(old_div;o;old_div<num1 && old_div<num2;old_div++){
        if(num1%old_div==0 && num2%old_div==0) {
            new_div = old_div;




            printf("the gcd of the number is %d", new_div);
            return 0;
        }
    }
}