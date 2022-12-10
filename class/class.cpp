#include <iostream>
using namespace std;

class Car {
	string color;
public:
	int speed;
	Car(int s=0, string c = "white"):speed(s), color(c){}
	void display() {
		cout << this << " ] " << speed << ", " << color << endl;
	}
};

int main()
{
	Car cararr[3] = {
		Car(100,"red"), Car(50,"blue")
	};
	for (int i = 0; i < 3; i++)
		cararr[i].display();
	return 0;
}