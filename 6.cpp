#include <iostream>
#include <cmath>

int main (void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double sum=0;
  for(double ii=1; ii<100000; ii++)
    {
      sum+=1/ii;
      std::cout<<ii<<"\t"<<sum<<std::endl;
    }
  return 0;
}
