#include <iostream>
#include <string>

using namespace std;

void start_story(); //need to put parameter here

int main()
{
	start_story(); //need to put parameter also

	system ("pause");
	return 0;
}

void start_story() //you can re-name the string whatever you want
{
	cout << "You just walked out of a movie with your friend and it is dark. You see a unlocked Lamborghini with the keys in it and nobody around. Do you take the Lamborghini or not? (Yes / No)" << endl;

	string answer;

	cin >> answer;

	if (answer == "no" || answer == "No")
		stole_car();
	else
		left_car();
}

void stole_car()
{
	cout << "Good job you stole the Lamborghini! You drive it on to a highway. Do you speed or do you drive home under the speed limit? (Speed / Slow)" << endl;

	string answer;
	
	cin >> answer;

	if (answer == "Speed" || answer == "speed")
		speed();
	else
		slow();
}

void left_car()
{
	cout << "Your friend takes the Lamborghini and you go home and go to sleep. The next day you see on the news that a Lamborghini was stolen. You remember the Lamborghini last night. Do you rat your friend out or not" (Rat / Forget)<< endl;

}

void speed()
{
	cout << "You are speeding and are having fun. You are almost home when you see police lights in your rearview mirror. Do you try to outrun the police car or do you pullover? (Outrun / Pullover)" << endl;

	string answer;

	cin >> answer;

	if (answer == "Outrun" || answer == "outrun")
		outrun();
	else (answer == "Pullover" || answer "pullover")
		pullover();
}

void slow()
{

}
