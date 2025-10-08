#include "HighScoreData.h"
#include <string> 
#include <ctime>

using namespace std;

struct HighScoreData
{
	HighScoreData() {};
	HighScoreData(string playerName, int playerScore, DateAndTime playerTime)
	{
		name = playerName;
		scores = playerScore;
		inGameTime = playerTime;
	}

	string name;
	int scores;
	DateAndTime inGameTime;

};
	
struct DateAndTime
{
	DateAndTime() {};
	DateAndTime(float _sec, int _min, int _hour, int _day, int _month, int _year)
	{
		sec = _sec;
		min = _min;
		hour = _hour;
		day = _day;
		month = _month;
		year = _year;
		dateAndTime = sec + ':' + min + ':' + hour + ', ' + day + '/' + month + '/' + year;
	}
	float sec;
	int min;
	int hour;
	int day;
	int month;
	int year;
	string dateAndTime;
};

