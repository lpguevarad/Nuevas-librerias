#include <iostream>
#include <fstream>
#include <string>

void print_numbers(int nmax, std::string name);

int main(void)
{
  print_numbers(100, "datosfout.txt");
  print_numbers(200, "datosfout2.txt");
  return 0;
}

void print_numbers(int nmax, std::string name)
{
  std::ofstream fout(name);
  fout.precision(16); fout.setf(std::ios::scientific);
  for(int ii=1; ii <= nmax; ++ii){
    fout << ii << "\t" << 1.0/ii<< std::endl;
  }
  fout.close();

}
