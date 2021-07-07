//Programming Project 1.
//Authour: Mothapo RL
//rampedilesly@gmail.com
//Assignmnet No: 3
//Description: Program to generate personalized junk mail. 
//Last canged: 27 May 2017

#include<iostream>//allow the program to perform input and output
#include<fstream>//allow the program to perfor file I/O
#include<cstdlib> 
#include<string>//program uses C++ standard string class
#include<cctype>

using namespace std;
char name;
void addName(ifstream& cinf, ofstream& coutf);//function prototype
int main()
{
	ifstream cinf;
	ofstream coutf;
	string name;


	cinf.open("inputFile.txt");//connect and open the file for input
	if (cinf.fail())
	{
		cout << "Input file opening failed" << endl;//display message if file open failed
		exit(1);
	}

	coutf.open("outputFile.txt");//connect and open the file for output
	if (cout.fail())
	{
		cout << "Output file opening failed" << endl;//display message if file open failed
		exit(1);
	}

	cout << "Enter a name: ";//prompt user for file name
	cin >> name;//read the input from user into name
	addName(cinf, coutf);//function call 

	cinf.close();// close the file when finished getting input
	coutf.close();//close the file when finished sending output

	return 0;


}
	void addName(ifstream& cinf, ofstream& coutf)
	{
		char symbol;
		cinf.get(symbol);
		while (!cinf.eof())//while not end of the file
		{
			cinf.get(symbol);
			if (symbol == '#')
				coutf << name;
			else
				coutf << symbol;

			cout << endl;

		}


	}



	
	

	