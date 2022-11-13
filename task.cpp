#include <fstream>
#include <iostream>
#include <regex>

using namespace std;

int main(int argc, char **argv)
{

  ifstream fin;
  fstream pout;
  int temp;
  int starsize = 0;
  int sum = 0;

  char path[100] = "/Users/cuma/Documents/Tasks/odetojoy.txt";
  pout.open(path, ios::out|ios::app);

   fin.open("odetojoy.txt"); 
   string content;
   string list;
   pout << content;

  if (!fin){
      cout << "\error!\n";
      system ("Pause");
      return 1;

    }

while (fin >> content) {

    list.append(content);
    list.append(" ");

    size_t pos = content.find("*");
    if(pos != string::npos){

      starsize++;

    }

  }  

    if(list.empty()){

    cout<<"Error: "<<"Empty List "<<endl;

    return 1;

    }

cout << "Character Count : " <<list.size() - 1<< " " << endl;
cout << "Stars Count "<<starsize<< endl;

list = regex_replace(list, std::regex("\\*"), ""); // replace '*' -> ''

list.append(" Ludwik van Beethoven");

cout << "Songs with its composer : " << list << " " << endl;
  
pout.close();

fin.close();

fstream createFile;

char createPath [100]= "/Users/cuma/Documents/Tasks/newfile.txt";
createFile.open(createPath, ios::out|ios::app);

createFile << list << endl;

createFile.close();

return 0;

}