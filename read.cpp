#include <fstream>

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  ifstream fin;
  int temp;
  int sum = 0;

  cout << "\nsum of digits from file\n";

  fin.open("bob.txt");

  if (!fin){
      cout << "\error!\n";
      system ("Pause");
      return 1;
    }

  while (fin >> temp) {
    cout << temp << endl;
    sum += temp;
  }

  cout << "\n\n=========\n"
  << " SUM = " << sum << "\n\n\n";

  fin.close();


  system ("Pause");       
  return 0;
}

