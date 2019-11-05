#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
	string line,line1="hello world";
	ifstream myfile ("example.txt");

	if(cout << myfile.is_open() << '\n')
	{
			while (getline(myfile,line))
			{
				cout << line << endl;
			}
		myfile.close();
	}
	else
	{
		cout << "unable to open example.txt";
	}

return 0;
}

