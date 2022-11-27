#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time():hours(0),minutes(0){}
	Time(int h,int m):hours{h},minutes{m}{}

	void displayTime() {
		cout << hours << ": " << minutes << endl;

	}
	Time& operator++()
	{
		minutes++;
		if (minutes > 59) {
			minutes = 0;
			++hours;
		}
		return *this;
		
	}
};
int main() {
	Time a(10, 59);
	a.displayTime();
	a.operator++();
	a.displayTime();
	a.operator++();
	a.displayTime();

}