#include <cmath>
#include <cmath.h>
double RectPerim (double lng, double height)//Find Perimetr 
{
return 2*(lng + height);
}
double RectSquar (double lng, double height)// ploshad
{
return lng*height;
}
double RectLgOfDiag (double lng, double height)
{
return sqrt(pow(lng,2)+pow(height,2));
}
