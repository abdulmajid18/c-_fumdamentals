int x = 7;    // definition
extern int x; // declaration
extern int x; // another dclaration

double sqrt(double); // declaration
double sqrt(double d)
{ /* . . . */
} // definition
double sqrt(double); // another declaration of sqrt
double sqrt(double); // yet another declaration of sqrt

// int sqrt(double);  // error: inconsistent declaration of sqrt

int main()
{
}