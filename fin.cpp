#include <iostream>
#include <fstream>
#include <string>

void read__numbers(std::string name);

int main(void)
{
  read__numbers("datosfout.txt");
  read__numbers("datosfout2.txt");

  return 0;
}

void read__numbers(std::string name)
{
  std::ifstream fin(name);
  int n;
  double x;
  double suma(0);
  for(x=1;x<=N;++x){
    suma=
  }
  while(fin) {
    fin >> n >> x;
    std::cout << n << "\t" << x << std::endl;
  }



  
  fin.close();

}