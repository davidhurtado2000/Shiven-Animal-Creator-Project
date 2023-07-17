#include <iostream>
#include <stdlib.h>
#include "Animal.h" 

using namespace std;

class kangaroo : public animal {
	private:
		int jumpheight;
		string name;
		string gender;
	public:
		kangaroo(int, int, int, int, string, string);
		void jump();
		void walk();
		void hop();
		string getGender();
		string getName();
		int getJumpheight();
		string getKangarooInformation();
};

kangaroo::kangaroo(int _size, int _speed, int _lifespan, int _jumpheight, string _name, string _gender) : animal(_size, _speed, _lifespan){
	jumpheight = _jumpheight;
	name = _name;
	gender = _gender;
}

void kangaroo::jump() {
	cout << "I am jumping.";
}

void kangaroo::walk() {
	cout << "I am walking.";
}

void kangaroo::hop() {
	cout << "I am hopping.";
}

string kangaroo::getGender() {
	return gender;
}

int kangaroo::getJumpheight() {
	return jumpheight;
}
string kangaroo::getName() {
	return name;
}

string kangaroo::getKangarooInformation() {
	string Result;
	Result = "Size: " + to_string(getSize()) + " " + "Speed: " + to_string(getSpeed())+ " " + "Lifespan: " + to_string(getLife())+ " " + "Jumpheight: " + to_string(getJumpheight())+ " " + "Name: " + getName()+ " " + "Gender: " + getGender()+ " ";
	return Result;
}