#include <string>
#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	// Read File with fileName
	ifstream file("Kisiler.txt");

	string line = "";

	// Line by Line read process on the file
	while (getline(file, line))
	{
		for (int i = 0; i < line.size(); i++) {
			// Read char by char
			cout << line[i] << endl;
		}
	}

	system("pause");
}

