#include <iostream>
#include <cmath>

int main() {
    double a, b, c, x1, x2, discriminant;

    // Get input from the user
    std::cout &#8203;`oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter the coefficients of the quadratic equation (a, b, c): \";\n    std::cin >> a >> b >>"}`&#8203; c;

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0) {
        // Real and distinct roots
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and distinct: " << x1 << " and " << x2 << std::endl;
    } else if (discriminant == 0) {
        // Real and same roots
        x1 = (-b) / (2*a);
        std::cout << "Roots are real and same: " << x1 << std::endl;
    } else {
        // Complex roots
        std::cout << "Roots are complex" << std::endl;
    }

    return 0;
}
