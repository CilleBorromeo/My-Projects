#include <stdio.h>
int main() {
	
	double width = 23.00, length = 10.00, Area = 2.00;
	Area = width * length; 
	printf("=== Geometry Cheat Sheet ===\n\n");
	printf("1. Rectangle\n");
	printf("Formula: Area = length x width\n");
	printf("Values: length = 10.00, width = 23.00\n");
	printf("Area = %.2f\n\n", Area);

	double height = 0.5, base = 7.00, TArea = 5.00;
	TArea = base * height;
	printf("2. Triangle\n");
	printf("Formula: TArea = 0.5 x base x height\n");
	printf("Values: base = 7.00, Height = 23.00\n");
	printf("TArea = %.2f\n\n",TArea);
	
	double CArea,Radius = 7.00;
	const double PI = 3.14159265359;
	CArea = PI * Radius * Radius;
	printf("3. Circle\n");
	printf("Formula: CArea = 3.14 x Radius^2\n");
	printf("Values: Radius = 7\n");
	printf("CArea = %.2f\n\n",CArea);
	
	double Volume, side = 3.00;
	Volume = side * side * side;
	printf("4. Cube\n");
	printf("Formula: Volume = side^3\n");
	printf("Values: side = 3.00\n");
	printf("Volume = %.2f\n\n",Volume);

	double radius = 7.00, Height = 15;
	Volume = (radius * radius) * PI * Height;
	printf("5. Cylinder\n");
	printf("Formula: Volume = PI x radius^2 * height\n");
	printf("Values:PI = 3.14, radius = 7.00, height = 15.00\n");
	printf("Volume = %.2f\n\n",Volume);

	return 0;
}