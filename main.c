#include <stdio.h>

int main(void)
{
    int op1, op2;
    int result;   //result 안쓰고 수식넣어도됨

    printf("input two integers:");
    scanf("%i %i", &op1, &op2);

    result = op1 + op2;
    printf("%i + %i = %i\n", op1, op2, result);

    result = op1 - op2;
    printf("%i - %i = %i\n", op1, op2, result);

    result = op1 * op2;
    printf("%i * %i = %i\n", op1, op2, result);

    result = op1 / op2;
    printf("%i / %i = %i\n", op1, op2, result);

    result = op1 % op2;
    printf("%i %% %i = %i\n", op1, op2, result);
    //%를 출력하려면 그냥 %만 쓰면 안되고 %%써야댐

    return 0;
}