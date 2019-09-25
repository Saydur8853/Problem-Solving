#include<stdio.h>

int main (){

    int employee;
    int hours;

    float amount;
    float salary;

    scanf("%d", &employee);
    scanf("%d", &hours);
    scanf("%f", &amount);

    salary = hours*amount;

    printf("Number = %d\n", employee);
    printf("Salary = U$ %.3f\n", salary);

    return 0;
}
