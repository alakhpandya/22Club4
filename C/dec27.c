/*
Ask two integers from user, find their average. Now print "Hello world" on the screen. Now ask another two integers from user, find their average and print "How are you" on the screen. Again ask for two more integers from user, print their average and then print "See you soon" on the screen. finally ask last pair of integers from user, print their average and then print "I'll be back" on the screen.
*/

/*
#include<stdio.h>
// function with arguments:
void avg(int x, int y){
// void avg(){
    float z;
    z = (x + y) / 2.0;
    x += 1;
    printf("Average of %d & %d is: %.2f", x, y, z);
}

int main()
{
    // avg(10, 20);
    int a, b, c, d, e, f, g, h;
    printf("Enter two integers:\n");    
    scanf("%d%d", &a, &b);      // a = 20, b = 30
    avg(a, b);
    // avg(x, y);
    printf("Hello World!");
    printf("Enter two integers:\n");    
    scanf("%d%d", &c, &d);
    avg(c, d);
    printf("How are you?");
    printf("Enter two integers:\n");    
    scanf("%d%d", &e, &f);
    avg(e, f);
    printf("See you soon!");
    printf("Enter two integers:\n");    
    scanf("%d%d", &g, &h);
    avg(g, h);
    printf("I'll be back...");
    return 0;
}
*/

/*
Ask two integers from user, find their average. Ask two more integers from user, also find their average. Add the two averages and print the answer on the screen.
*/
#include<stdio.h>

// function with return
float avg(int x, int y){
    float z;
    z = (x + y) / 2.0;
    return z;
}
int main(){
    int a, b, c, d;
    float e, f;
    printf("Enter two integers:\n");    
    scanf("%d%d", &a, &b);
    e = avg(a, b);
    printf("Enter two integers:\n");    
    scanf("%d%d", &c, &d);
    f = avg(c, d);
    printf("Final answer = %.2f", e + f);

    return 0;
}

/*
Ask 5 integers from user, find their factorials using a function that finds factorial of only one number at a time. Print the final answer that is addition of the factorials of all the numbers.
*/