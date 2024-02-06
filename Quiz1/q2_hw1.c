#include <stdio.h>
#include <stdint.h>


int main()
{
    uint8_t a = 10;
    uint8_t b = 100;
    uint8_t c = a + b;
    printf("%u\n", c);

    a = 100;
    b = 250;
    c = a + b;
    printf("%u\n", c);


    a = 100;
    b = 250;
    uint16_t c2 = a + b;
    printf("%u\n", c2);

}

