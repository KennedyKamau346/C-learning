/* a modification of spherevol to ask user to enter the radius */
#include <stdio.h>

int main(void)
{
	float r, v;

	printf("Enter the radius of the sphere: ");
	scanf("%f", &r);

	v = 4.0f / 3.0f * 3.142 * r * r * r;

	printf("The volume of a sphere of radius %f is %f\n", r, v);

	return 0;
}
