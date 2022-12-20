/*
functions = assistants
We use functions when we are planning to use a particular code multiple times.

4 types of functions:
1. without arguments, without return
2. with arguments, without return
3. without arguments, with return
4. with arguments, with return
*/
#include<stdio.h>

void printGood(){
    printf("I am good");
}
void printCDef(){
    printf("C (pronounced like the letter c)[6] is a general-purpose computer programming language.\nIt was created in the 1970s by Dennis Ritchie, and remains very widely used and influential.\nBy design, C's features cleanly reflect the capabilities of the targeted CPUs.\nIt has found lasting use in operating systems, device drivers, protocol stacks, though decreasingly[7] for application software.\nC is commonly used on computer architectures that range from the largest supercomputers to the smallest microcontrollers and embedded systems.\n\n");
}

int main()
{
    int a, b, c, d;
    printf("Welcome to my code!\n");
    printGood();
    printf("\nEnter 4 integers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a > b){
        printCDef();
    }
    if (c > d){
        printCDef();
    }
    if (a > c){
        printCDef();
    }
    if (b > d){
        printCDef();
    }
    return 0;
}

