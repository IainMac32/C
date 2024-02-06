#include <stdio.h>
#include <string.h>


int main()
{
    char word[] = "FOOBAR";
    int length = strlen(word);
    printf("%d\n",length);

    char firstThree[4];
    strncpy(firstThree,word,3);
    firstThree[3] = '\0';


    printf("%s\n",firstThree);


}

