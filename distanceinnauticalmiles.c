#include <stdio.h>
#include <math.h>
int main()
{

  float l1,l2,g1,g2,D;
  
  printf("Enter L1 coordinates\n");
  scanf("%f",&l1);
  printf("Enter L2 coordinates \n");
  scanf("%f",&l2);
  printf("Enter G1 coordinates\n");
  scanf("%f",&g1);
  printf("Enter G2 coordinates \n");
  scanf("%f",&g2);
  
  D = 3963 * pow(sin(l1)*sin(l2) + cos(l1)*cos(l2) * cos(g2-g1),-1);

    printf("Distance in nautical miles is %f\n",D);
    return 0;
}
