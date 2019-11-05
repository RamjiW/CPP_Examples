#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string str="hello";
	ofstream file ("test.txt");
	file << str << '\n' ;	
return 0;
}
