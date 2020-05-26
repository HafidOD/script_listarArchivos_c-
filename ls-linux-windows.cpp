#include <iostream>
#include <dirent.h>

using namespace std;

void list_dir(string dir)
{
	string PWD =  "dir "+ dir; // En windows string PWD =  "dir "+ dir;
  //cout << PWD << endl;  
  const char *command = PWD.c_str(); 
  system(command);
}

void init()
{
	cout << "Escribe la ruta absoluta del directorio a listar: (C:/user/example): ";
	string dir;
	getline(cin, dir);
	list_dir(dir);
  cout << endl;
	init();
}

int main(int argc, char *argv[])
{
	//system((char*)"pwd");
  init();
	return 0;
}