#include <iostream>
using namespace std;

class seseorang {
public:
	virtual void pesa() = 0;
	//virtual void pesan() {
	//cout<<"Pesan dari seseorang"<<endl;
	//}
};

class joko :public seseorang {
public:
	void pesan() {
		cout << "Pesan dari joko" << endl;
	}
};

class Lia :public seseorang {
public:
		void pesan() {
		cout << "Pesan dari lia" << endl;
	}
};