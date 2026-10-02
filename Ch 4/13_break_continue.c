#include <stdio.h>

int main()
{
    for (int i = 0 ; i < 15 ; i++)
    {
        if(i==5)
        {
            // break; // exit the code when the i becomes 5
            continue; // exit this iteration, and executes rest, except 5 
        }
        printf("i is %d\n",i);
    }
    return 0;
}