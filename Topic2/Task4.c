#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, discriminant, roots1, roots2, real, imagine;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        roots1 = (-b + sqrt(discriminant)) / (2*a);
        roots2 = (-b - sqrt(discriminant)) / (2*a);
       
        printf("root1 = %.2lf and root2 = %.2lf", roots1, roots2);
    }

    else if (discriminant < 0) {
        real = -b / (2*a);
        imagine = sqrt(-discriminant) / (2*a);

        printf("root1 = %.2lf + %.2lfi and roots2 = %.2lf - %.2lfi", real, imagine, real, imagine);
    }

    else {
        roots1 = roots2 = -b / (2*a);
        
        printf("root1 and root2 = %.2lf", roots1);
    }

    return 0; 
}