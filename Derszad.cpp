#include <iostream>


using namespace std;

int main ()
{
  std::cout <<
    "* Pul chevirici zad "
    << std::endl;
  float rub = 0.0162;
  float sgd = 0.7363;
  float sar = 0.2795;
  float azerbaijan_manat_azn;

  cout << "Azerbaycan manatini daxil edin : ";

  cin >> azerbaijan_manat_azn;


  cout << "Daxil edilen AZN'in RUB uygun mezennesi : " <<
    azerbaijan_manat_azn / rub << "RUB" << "\n";
  cout << "Daxil etdiyiniz AZN'in SGD uygun mezennesi : " <<
    azerbaijan_manat_azn / sgd << "SGD" << "\n";
  cout << "Daxil etdiyiniz AZN'in SAR uygun mezennesi : " <<
    azerbaijan_manat_azn / sar << "SAR" <<"\n";;



}
