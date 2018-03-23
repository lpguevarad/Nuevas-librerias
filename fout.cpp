#include <iostream>
#include <fstream>

void print_numbers(int nmax);

int main(void)
{
  print_numbers(100);
  return 0;
}

void print_numbers(int nmax)
{
  std::ofstream fout("datosfout.txt");
  for(int ii=1; ii <= nmax; ++ii){
    fout << ii << "\t" << 1.0/ii<< std::endl;
  }
  fout.close();

}
