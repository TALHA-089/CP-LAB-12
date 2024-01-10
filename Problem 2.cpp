#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ofstream file("Myfile.txt");

	string My_string;

	cout << "\n\nEnter the string to write to the file: ";
	
	getline(cin, My_string);

	if (!file.is_open())
	{
		cerr << "\n\nFile not found!\n\n";
		return 0;
	}

	file << My_string;


	file.close();

	cout << "\n\nString has been written to the file successfully";

	cout << endl << endl;
	system("pause");
	return 0;
}