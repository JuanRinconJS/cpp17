#include<cmath>

double pytha(double a , double b , double c )
{
    if(a == 0)
    {
       return a = sqrt((pow(c,2) - pow(b,2)));
    }
        else if(b == 0)
        {
          return  b = sqrt((pow(c,2) - pow(a,2)));
        }
            else if(c == 0)
            {
              return  c = sqrt((pow(a,2) + pow(b,2)));
            }

    return 0;
}
