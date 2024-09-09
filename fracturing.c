//Wellington Sosa 5651778


#include <stdio.h>
#include <math.h>


#define PI 3.14159


// Function prototypes
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance, double x1, double y1, double x2, double y2);
double calculateArea(double distance, double x1, double y1, double x2, double y2);
double calculateWidth(double distance, double x1, double y1, double x2, double y2);
double calculateHeight(double distance, double x1, double y1, double x2, double y2);
void askForPoints(double* x1, double* y1, double* x2, double* y2);


int main(void) {
    double x1, y1, x2, y2;


    // Ask for both points
    askForPoints(&x1, &y1, &x2, &y2);


    // Calculate distance between points
    double distance = calculateDistance(x1, y1, x2, y2);


    // Calculate and display perimeter, area, width, and height
    calculatePerimeter(distance, x1, y1, x2, y2);
    calculateArea(distance, x1, y1, x2, y2);
    calculateWidth(distance, x1, y1, x2, y2);
    calculateHeight(distance, x1, y1, x2, y2);

    return 0;
}

// Asking User for inputs 

void askForPoints(double* x1, double* y1, double* x2, double* y2) {
    printf("Enter coordinates for Point #1 (x1 y1): ");
    while (scanf("%lf %lf", x1, y1) != 2) {
        printf("Invalid input. Please enter two numbers: ");
        while (getchar() != '\n'); 
    }

    printf("Enter coordinates for Point #2 (x2 y2): ");
    while (scanf("%lf %lf", x2, y2) != 2) {
        printf("Invalid input. Please enter two numbers: ");
        while (getchar() != '\n'); 
    }
}

// Distance Calculation and Output 

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

// Perimeter Calculation and Output

double calculatePerimeter(double distance, double x1, double y1, double x2, double y2) {
    double perimeter = 4 * distance;
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of your request is %.2f\n", perimeter);
    return 3.0; // Difficulty rating 
}

// Area Calculation and Output

double calculateArea(double distance, double x1, double y1, double x2, double y2) {
    double area = pow(distance, 2);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of your request is %.2f\n", area);
    return 3.0; // Difficulty rating 
}

// Width Calculation and Output
double calculateWidth(double distance, double x1, double y1, double x2, double y2) {
    double width = fabs(distance);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of your request is %.2f\n", width);
    return 2.0; // Difficulty rating 
}

// Height Calculation and Output

double calculateHeight(double distance, double x1, double y1, double x2, double y2) {
    double height = fabs(distance);
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of your request is %.2f\n", height);
    return 4.0; // Difficulty rating 
}