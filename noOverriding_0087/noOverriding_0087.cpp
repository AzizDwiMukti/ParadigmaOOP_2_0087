#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya function dari base class";
	}
};
public:
	void perkenalan() {
		cout << "Hallo saya Function dari derived Class";
	}
};