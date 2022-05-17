//BY Pramit

#include <stdio.h>
#include <conio.h>

int main()
{
	float height, height_in_inch, weight, height_in_meter;
	int height_in_feet;
	printf("Enter your height in feet and inches:");
	scanf("%d", &height_in_feet);
	scanf("%f", &height_in_inch);
	
	height_in_inch = height_in_feet*12+height_in_inch;
	
	printf("The height in inches is %f\n", height_in_inch);
	
	height_in_meter = height_in_inch*0.0254;
	printf("The height in meter is %f\n", height_in_meter);
	
	printf("Enter Your weight:");
	scanf("%f", &weight);
	printf("The weight is:%f", weight/(height_in_meter*height_in_meter));
	
	getch();
	return 0;
	
}