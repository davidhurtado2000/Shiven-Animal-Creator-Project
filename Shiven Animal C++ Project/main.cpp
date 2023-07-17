#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include "Kangaroo.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char **argv)
{
	int _size;
	int _speed;
	int _lifespan;
	int choice;
	int parentChoice;
	int _jumpHeight;
	string _name;
	string _gender;
	string cont = "y";

	vector<animal> animalStorage;
	vector<kangaroo> kangarooStorage;

	do
	{
		cout << "Welcome to our program. A list of options will appear below, feel free to choose one. 	\n 1.- Create Animal \n 2.- Create Kangaroo \n 3.- Exit \n";
		cout << "Choose option: ";
		cin >> choice;

	/* code */


		switch (choice)
		{
		case 1:
		{
				cout << "Please choose the size of the animal you wish to create: \n";
				cin >> _size;
				cout << "Please choose the speed of the animal you wish to create: \n";
				cin >> _speed;
				cout << "Please choose the lifespan of the animal you wish to create: \n";
				cin >> _lifespan;
				animal Animal1 = animal(_size, _speed, _lifespan);
				animalStorage.push_back(Animal1);
			
		}
		break;
		case 2:
		{
			if (animalStorage.empty())
			{
				cout << "No animals are present to inherit traits from, please try again when an animal is created. \n";
			}

			else
			{
				for (size_t i = 0; i < animalStorage.size(); i++)
				{
					cout << animalStorage.at(i).getAnimalInformation(); 
					cout << "Option " << (i + 1) << "\n";
				}
				cout << "Choose the animal you wish to inherit traits from: ";
				cin >> parentChoice;
				parentChoice -= 1;
				cout << "Please choose the jump height of the kangaroo you wish to create: \n";
				cin >> _jumpHeight;
				cout << "Please choose the name of the kangaroo you wish to create: \n";
				cin >> _name;
				cout << "Please choose the gender of the kangaroo you wish to create: \n";
				cin >> _gender;
				kangaroo Kangaroo1 = kangaroo(animalStorage.at(parentChoice).getSize(), animalStorage.at(parentChoice).getSpeed(), animalStorage.at(parentChoice).getLife(), _jumpHeight, _name, _gender);
				kangarooStorage.push_back(Kangaroo1);
				for (size_t j = 0; j < kangarooStorage.size(); j++)
				{
					cout << kangarooStorage.at(j).getKangarooInformation() << "\n";
				}
			}
		}
		break;

		case 3:
			cout << "Program closed";
			break;

		default:
			cout << "Wrong option, try again";
			break;
		}
		

		if (choice == 3)
		{
			cont = "n";
		}

	} while (cont == "y");
}
