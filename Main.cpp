#include <iostream>
#include <string>

using namespace std;

void start_story(string); //need to put parameter here

int main()
{
	string name = "Wolfie";

	start_story(name); //need to put parameter also

	system ("pause");
	return 0;
}

void start_story(string bob) //you can re-name the string from name to whatever you want
{
	cout << "hello" << endl;

	cout << bob << endl;
}
