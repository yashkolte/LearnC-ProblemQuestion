#include <stdio.h>
void printAdd(int a){
    printf("The Address of variablea is %u", &a);
}
int main()
{
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printAdd(i);
    printf("The address of variable i is %u\n", &i);

    return 0;
} 