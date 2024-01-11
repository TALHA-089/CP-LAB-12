//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	ifstream file("input.txt");
//
//	char character;
//	int count = 0;
//	string content;
//	bool inWord = false;
//
//	while (file.get(character))
//	{
//		if (isspace(character))
//		{
//			if (inWord)
//			{
//				count++;
//				inWord = false;							//we are inside whitespace
//			}
//			
//		}
//		else
//		{
//			inWord = true;                             //we are inside a word
//		}
//	}
//
//	cout << "\n\nTotal words in the file: " << count;
//
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}