#include<iostream>
#include<string>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;

public:
	
	Box(int l = 0, int w = 0, int h = 0) :length(l), width(w), height(h) { }
	double getVolume(void) {
		return length * width * height;
	}
	string operator<(Box& b) {
		if (length < b.length &&
			width < b.width &&
			height < b.height)
			return "TRUE";
		else
			return "FALSE";
	}
	
	void print1()
	{
		cout << "상자 #1"<<endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이:" << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;
		
	}
	void print2()
	{
		cout << "상자 #2" << endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이:" << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;

	}
};

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
	a.print1();
	b.print2();
	
	cout << (a < b); 
}