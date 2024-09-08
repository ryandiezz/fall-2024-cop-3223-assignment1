#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput(); // Bonus function

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate perimeter of the city
double calculatePerimeter() {
    double distance = calculateDistance(); // Reusing the function calculateDistance
    double perimeter = 2 * PI * (distance / 2); 
    printf("The perimeter of the city is %.2lf\n", perimeter);
    
    return 1.0; // Returning difficulty score
}

// Function to calculate area of the city
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow((distance / 2), 2);
    printf("The area of the city is %.2lf\n", area);
    
    return 1.0; // Returning difficulty score
}

// Function to calculate width of the city
double calculateWidth() {
    double x1, x2;
    printf("Enter x coordinates (x1 and x2): ");
    scanf("%lf %lf", &x1, &x2);
    
    double width = fabs(x2 - x1);
    printf("The width of the city is %.2lf\n", width);
    
    return 1.0; // Returning difficulty score
}

// Function to calculate height of the city
double calculateHeight() {
    double y1, y2;
    printf("Enter y coordinates (y1 and y2): ");
    scanf("%lf %lf", &y1, &y2);
    
    double height = fabs(y2 - y1);
    printf("The height of the city is %.2lf\n", height);
    
    return 1.0; // Returning difficulty score
}

// Function to avoid repeating input logic
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
