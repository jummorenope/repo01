#include <iostream>
#include <cmath>

bool primo(int n);

int main (void)
{
  for(int ii=500; ii<=1400; ii++)
    {
      if(primo(ii)==true)
	std::cout<<ii<<std::endl;
    }
  return 0;
}

bool primo(int n)
{
  int r=std::sqrt(n);
  for(int ii=2; ii<=r; ii++)
    {
      if(n%ii==0)
	return true;
    }
  return false;
}
