#include <stdio.h>
#include <math.h>

double askForUserInput()
{
    double askForUser = 0;
    scanf("%lf", &askForUser);
    return askForUser;
}


double calculateDistance () {
    double distance = 0;

//     – Point #1 entered: x1 = -whatever was entered-; y1
// = -whatever was entered-
    double x1 = askForUserInput(); 
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %f, ", x1);
    printf("y1 = %f\n", y1);


// – Point #2 entered: x2 = -whatever was entered-; y2
// = -whatever was entered-
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x2 = %f, ", x2);
    printf("y2 = %f\n", y2);


// – The distance between the two points is -whatever is
// computed-
    distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    printf("%f\n", distance);

// Return: A double representing the distance
return distance;
}
double calculatePerimeter () {
    double perimeter = 0;

 //     – Point #1 entered: x1 = -whatever was entered-; y1
// = -whatever was entered-
    double x1 = askForUserInput(); 
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %f, ", x1);
    printf("y1 = %f\n", y1);


// – Point #2 entered: x2 = -whatever was entered-; y2
// = -whatever was entered-
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x2 = %f, ", x2);
    printf("y2 = %f\n", y2);
//The perimeter of the city encompassed by your request is -whatever is computed-
perimeter = calculateDistance(x1, y1, x2, y2) * 2;
printf("%f\n", perimeter);

return 4.0;


}

double calculateArea () {
    double area = 0;
    //     – Point #1 entered
    double x1 = askForUserInput(); 
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %f, ", x1);
    printf("y1 = %f\n", y1);


// – Point #2 entered
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x2 = %f, ", x2);
    printf("y2 = %f\n", y2);

    double length = fabs(x2 - x1); 
    double width = fabs(y2 - y1);  
    area = length * width;
     // the area of the city 
    printf("The area of the city is %f\n", area);

    return 3.0;

}
double calculateWidth () {
    double width = 0;
     //     – Point #1 entered
    double x1 = askForUserInput(); 
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %f, ", x1);
    printf("y1 = %f\n", y1);


// – Point #2 entered
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x2 = %f, ", x2);
    printf("y2 = %f\n", y2);

    width = fabs(x2 - x1);
    printf("%f\n", width);
    return 2.0;
}

double calculateHeight () {
    double height = 0;
     //     – Point #1 entered
    double x1 = askForUserInput(); 
    double y1 = askForUserInput();
    printf("Point #1 entered: x1 = %f, ", x1);
    printf("y1 = %f\n", y1);


// – Point #2 entered
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    printf("Point #2 entered: x2 = %f, ", x2);
    printf("y2 = %f\n", y2);
    double calculateHeight();
    height = fabs(y2 - y1);
    printf("%f\n", height);
    return 3.0;


}


int main(int argc, char **argv)
{
    
double askForUserInput() ;

calculateDistance () ;
 calculatePerimeter () ;
 calculateArea () ;
 calculateWidth () ;
 calculateHeight () ;

return 0;
}
