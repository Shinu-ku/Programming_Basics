#include <stdio.h>

float area(float r);

float area(float r)
{
    float AREA;
    AREA = 3.14 * r * r;
    return AREA;
}

int main()
{
    float radius, Area;

    // Prompt the user to enter the radius
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculate the area using the area function
    Area = area(radius);

    // Display the calculated area
    printf("Area: %f\n", Area);

    return 0;
}

