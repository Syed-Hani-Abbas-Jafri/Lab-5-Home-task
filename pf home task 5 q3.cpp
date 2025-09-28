#include <stdio.h>

int main() {
	
	float a, b, c, disc, root1, root2;
	
	printf("Enter coefficiants a, b, c\n");
	scanf("%f" "%f" "%f", &a, &b, &c);
	
	disc = b*b - 4*a*c;
	
	if (disc > 0) {
        printf("Two real roots\n");
    } 
    else if (disc == 0) {
        printf("One real root\n");
    } 
    else {
        printf("Imaginary roots\n");
    }

    return 0;
}
