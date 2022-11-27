#include <iostream>
using namespace std;

class  Weapon{
public:
	Weapon() {}
	virtual void load() = 0;

};
class Bomb:public Weapon{
	
	virtual void load()
	 { cout << "��ź�� �����մϴ�." << endl; }
};
class Gun:public Weapon{
	
	virtual void load() 
	 { cout << "���� �����մϴ�." << endl; }
};

int main()
{
	Weapon* g = new Gun();
	Weapon* b = new Bomb();
	

	g->load();
	b->load();
	b->load();

	delete g;
	delete b;
	return 0;
}