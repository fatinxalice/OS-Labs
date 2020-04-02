#include <stdio.h>

int main(){

char mood;

printf("Choose your mood:\nA	Happy\nB	Sad\nC	Overwhelmed\n");
scanf("%c", &mood); 

if(mood=='A'){
 printf("Here's your emoji:\n:)\n");
}
else if(mood=='B'){
 printf("Here's your emoji:\n:(\n");
}
else if(mood=='C'){
 printf("Here's your emoji:\nO.o\n");
}

}
