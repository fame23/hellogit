#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s0 = "nothing";
	string name = "Kyle";
	string fname = name + "Holder";
	vector <int> vect;
	vector <char> vc;
	
	vc.push_back('p');
	for (int i=0; i<5;i++)
	{
		vect.push_back(34);
	}
	
	
	cout << "s0 =" << s0 << endl;
	cout << "name =" << name << endl;
	cout << "The 3rd character of name is " << name[3] << endl;
	cout << "name has " << name.size() << "characters" << endl;
	
	if (name == "Kyle")
	{
		cout << "you are correct" << endl;
	}
	if (fname!="Holder")
	{
		cout << "you are incorrect" << endl;
	}
}
