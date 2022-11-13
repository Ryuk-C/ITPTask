#include <fstream>

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  fstream pout;
  int n;

  char path [100]= "/Users/cuma/Downloads/bob.txt";
  pout.open(path, ios::out|ios::app);

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

