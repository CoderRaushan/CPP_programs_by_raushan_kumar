 #include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string str;
	char sourcefile[50], destinationfile[50];
	cout << "Enter Source File with Extension: ";
	gets(sourcefile);
	fin.open(sourcefile);
	if (fin.fail())
	{
		cout << "Error in Opening Source File...!!!";
        fin.close();
		return 1;
	}
	cout << "Enter Destination File with Extension: ";
	gets(destinationfile);
	fout.open(destinationfile);
	 if (fout.fail())
	{
		cout << "Error in Opening Destination File...!!!";
		fout.close();
		return 2;
	}
		while (getline(fin,str))
		{
			fout << str<<endl;
		}
		cout << "Source File Date Successfully Copied to Destination File...!!!";
	fin.close();
	fout.close();
	return 0;
}