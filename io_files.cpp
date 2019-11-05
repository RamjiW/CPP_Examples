#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str1;
	ofstream myfile ;

	myfile.open("example.txt");
	myfile << "The file is opened. " << '\n'; 
	myfile <<"waiting for read operation ." << endl;
	myfile.close();

 	ifstream file ("example.txt");	
	while(getline(file,str1))
	{
		cout << str1 << endl;
	}
	file.close();
return 0;
}
