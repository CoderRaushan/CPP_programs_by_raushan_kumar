
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void printFrequency(string st)
{
	
	map<string, int>FW;

	stringstream ss(st); 

	string Word; 

	while (ss >> Word)
		FW[Word]++;

	map<string, int>::iterator m;
	for (m = FW.begin(); m != FW.end(); m++)
		cout << m->first << "-> "
			<< m->second << "\n";
}

int main()
{
	string s = "Geeks For Geeks Ide";
	printFrequency(s);
	return 0;
}
