#include <fstream>

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  ofstream pout;
  int n;

  pout.open("bob.txt");
  cout << "provide value. 0 ends program"<<endl;
  cout << "n=";
  cin >> n;

  while (n){
    pout << n << " "<<endl;
    cout << "n=";
    cin >> n;
  }

  pout.close();

  system ("Pause");
  return 0;
}

