#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream file ("text_file.txt");

	if (!file.is_open())
	{
		cerr << "\n\nFile not Found!\n\n";
		return 0;
	}

	char character;

	while (file.get(character))
	{
		cout << character;
	}

	file.close();

	cout << endl << endl;
	system("pause");
	return 0;
}