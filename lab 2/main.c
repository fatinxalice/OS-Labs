#include <stdio.h>

void secretFunc(){
    printf("You have passed beyond the boundary!\nBANKAI!");
}
void echo(){
    char buffer[20];
    printf("Enter a string without space: \n");
    scanf("%s",buffer);
    printf("You entered: %s",buffer);
    printf("\n");
}
int main()
{
    echo();
    return 0;
}
