#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int randomNumber = rand();

    printf("Random number: %d\n", randomNumber);

}

//pseudorandom numbers
//looks at the time to give a number 
//based of run and not based off called



