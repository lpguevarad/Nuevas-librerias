#include <iostream>

void print_numbers(int nmax);

int main(void)
{
  print_numbers(100);
  return 0;
}

void print_numbers(int nmax)
{
  for(int ii=1; ii <= nmax; ++ii){
    std::cout << ii << "\t" << 1.0/ii<< std::endl;
  }

}
