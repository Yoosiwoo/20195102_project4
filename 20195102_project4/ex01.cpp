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
		cout << "���� #1"<<endl;
		cout << "������ ����: " << length << endl;
		cout << "������ �ʺ�: " << width << endl;
		cout << "������ ����:" << height << endl;
		cout << "������ ����: " << getVolume() << endl;
		
	}
	void print2()
	{
		cout << "���� #2" << endl;
		cout << "������ ����: " << length << endl;
		cout << "������ �ʺ�: " << width << endl;
		cout << "������ ����:" << height << endl;
		cout << "������ ����: " << getVolume() << endl;

	}
};

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
	a.print1();
	b.print2();
	
	cout << (a < b); 
}