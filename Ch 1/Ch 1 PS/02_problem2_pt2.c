// Modify the area of circle to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    int radius;
    int height;
    float area;
    float volume;
    
    printf("============================\n");
    printf("Enter The Value of Radius: ");
    scanf("%d",&radius,"\n");

    printf("Enter the Value of Heght of Cylinder: ");
    scanf("%d",&height);

    area = (3.14)*(radius*radius);
    volume = area*height;

    printf("\nThe Volume of Cylinder is %.2f unit cube",volume);
    printf("\n============================");

    return 0;
}