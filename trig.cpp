#include<cmath>

double trig(double s1,double s2,double s3)
{
    if(s1 == 0)
    {
       return acos(s2/s3);
    }
        else if(s2 == 0)
        {
          return  asin(s1/s3);
        }
            else if(s3 == 0)
            {
              return  atan(s1/s2);
            }
    return 0;
}

