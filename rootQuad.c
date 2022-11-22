#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z, root1, root2, formula;
    printf("\nEnter the values of x, y and z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    formula = y * y - 4 * x * z;

// IF-ELSE Starts
    if (formula >= 0)
    {
        if (formula > 0)
        {
            root1 = (-y + sqrt(formula)) / (2 * x);
            root2 = (-y - sqrt(formula)) / (2 * x);
            printf("First Root= %0.2lf and Second Root = %0.2lf", root1, root2);
        }

        else
        {
            root1 = root2 = -y / (2 * x);
            printf("First Root = Second Root= %0.2lf", root1);
        }
    }

    else
    {
        printf("Roots are Imaginary!");
    }
    return 0;
}