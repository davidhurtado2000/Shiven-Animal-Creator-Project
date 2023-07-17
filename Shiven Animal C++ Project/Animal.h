#include <iostream>
#include <stdlib.h>
using namespace std;

class animal {
	private:
		int size;
		int speed;
		int lifespan;
	public:
		animal(int, int, int);
		void run();
		void breathe();
		void sleep();
		int getSpeed();
		int getSize();
		int getLife();
		void setSize(int);
		string getAnimalInformation();
};

animal::animal(int _size, int _speed, int _lifespan) {
	size = _size;
	speed  = _speed;
	lifespan = _lifespan;
}

void animal::run() {
	cout << "I am running.";
}

void animal::breathe() {
	cout << "I am breathing.";
}

void animal::sleep() {
	cout << "I am sleeping.";
}

int animal::getSpeed() {
	return speed;
}

int animal::getLife() {
	return lifespan;
}

int animal::getSize() {
	return size;
}

void animal::setSize(int newSize) {
	size = newSize;
}

string animal::getAnimalInformation() {
	string Result;
	Result = "Size: " + to_string(getSize())+ " " + "Speed: " + to_string(getSpeed())+ " " + "Lifespan: " + to_string(getLife())+ " ";
	return Result;
}