// Calculate the area of a circle

#include <stdio.h>

int main()
{
    int radius;
    float area;
    
    printf("============================\n");
    printf("Enter The Value of Radius: ");
    scanf("%d",&radius,"\n");

    area = (3.14)*(radius*radius);

    printf("The Area of Circle is %.2f unit sq",area);
    printf("\n============================");
    return 0;
}