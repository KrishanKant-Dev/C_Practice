#include <stdio.h>
#include <string.h>

char *slice(char str[], int m, int n)
{
    for (int i = 0; i < n; i++)
        str[i] = str[m + i];

    str[n] = '\0';

    return str;
}

int main()
{
    char str[] = "The quick brown fox jumps over the lazy dog";
    int m, n;

    printf("Enter m and n (start index and length): ");
    scanf("%d %d", &m, &n);

    printf("Sliced String : %s\n", slice(str, m, n));
    printf("Original String Now: %s\n", str);

    return 0;
}

/*
COMMENTS:

1. #include <string.h> is only needed if you use memmove (commented out below).

2. Alternative (simpler, but library-based):
   memmove(str, str + m, n);
   str[n] = '\0';

   memmove is safe here even though source and destination overlap,
   because it copies as if through a temporary buffer.

3. Manual version: copy the slice to the front, left to right.
   Safe because the write index i is always behind the read index m+i.

4. Cut the string off right after the slice.

5. Return the (now sliced) original string.

6. printf("Sliced String : %s\n", slice(str, m, n)); prints the slice.

7. printf("Original String Now: %s\n", str); also prints the slice
   because the original string has been changed!
*/