#include <stdio.h>
#include <string.h>

int main()
{

    // strlen()
    char st[] = "Meow";
    printf("%d\n\n",strlen(st)); // Gives the count of the string excluding the null charater

    // strcpy()
    char source[] = "Hello there I am a Dev";
    char target[30]; //  size must be defined first before copying
    strcpy(target,source); // right vala left me jata hai 
    printf("%s\n\n",target);

    // strcat()
    char str1[] = "Hello";
    char str2[] = "There";
    strcat(str1,str2); // concatinates the string, and all of this is done in str to the left, use space to avoid mess
    printf("%s\n\n",str1);

    // strcmp()
    int storage = strcmp("Hello","Hi");
    /*
    returns zero if the values are equal, compares the ascii value
    if left string's alphabet comes first then prints -ve val
    if right string's alphabet comes first then prints +ve val
    */
    printf("%d",storage);
    return 0;
}