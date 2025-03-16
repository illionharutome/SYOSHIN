#include <stdio.h>
int main(void)
{
    float radius;
    float area;

    printf("Please enter the radius of the cirle: \n");
    scanf("%f",&radius);
    area = radius * radius * 3.1415926;

    printf("The area of the circle is %.2f.\n",area);

    return 0;
}