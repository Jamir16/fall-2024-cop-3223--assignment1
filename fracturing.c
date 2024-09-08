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


int main(int argc, char **argv)
{
    
double askForUserInput() ;

calculateDistance () ;
// calculatePerimeter () ;
// calculateArea () ;
// calculateWidth () ;
// calculateHeight () ;

return 0;
}
