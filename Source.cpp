//time traveler program
#include <iostream>
using namespace std;

//the main function
 int main() 
{
  //Declares time variables
	int HourNow;
	int MinuteNow;
	int SecondNow;
	float YearsGone;
	const int SecondsYear = 31536000;

  //prints out prompts for user time inputs
	cout << "What hour is it? ";
	cin >> HourNow;
	cout << "What minute is it? ";
	cin >> MinuteNow;
	cout << "What second is it? ";
	cin >> SecondNow;
	
	//prints out user's current time
	cout << "currently it is " <<  HourNow << ":" << MinuteNow << ":" << SecondNow << endl;

	//print out prompt for years traveling 
	cout << "How many years will you travel? ";
	cin >> YearsGone;

  //Function, declarations  and operations for time solution
	int TotalSeconds = HourNow*60*60 + MinuteNow*60 + SecondNow + YearsGone*SecondsYear;
	int NewSeconds = TotalSeconds%60;
	int NewMinutes = TotalSeconds/60%60;
	int NewHours = TotalSeconds/60/60%24;

  //prints out arrival time using a function
	cout << "You will arrive at " << NewHours << ":" << NewMinutes << ":" << NewSeconds << endl;

  return 0;
   
 
}

