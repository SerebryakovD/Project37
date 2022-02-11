#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Pizza {
	int price;
	string name;
	double discount;
	string id;
	int points;
};

void printItem(Pizza pizza) {
	cout << "price = " << pizza.price << endl;
	cout << "name = " << pizza.name << endl;
	cout << "discount = " << pizza.discount * 100 << "%" << endl;
	cout << "id = " << pizza.id << endl;
	cout << "points = " << pizza.points << endl;
	cout << endl;
}

Pizza setAndGetPizza() {
	Pizza currentPizza;
	cout << "Enter pizza data" << endl;
	cout << "Price: ";
	cin >> currentPizza.price;
	cout << "Name: ";
	cin >> currentPizza.name;
	cout << "Discount: ";
	cin >> currentPizza.discount;
	cout << "Id: ";
	cin >> currentPizza.id;
	cout << "Points: ";
	cin >> currentPizza.points;

	return currentPizza;
}

void printMenu(vector<Pizza>& PizzaMenu) {
	for (auto pizza : PizzaMenu) printItem(pizza);
}

int main() {
	vector<Pizza> PizzaMenu;
	bool isRun = true;
	char exit = 'y';

	while (isRun) {
		PizzaMenu.push_back(setAndGetPizza());
		system("cls");
		cout << "want to proceed? (y/n): ";
		cin >> exit;

		if (exit == 'n') {
			system("cls");
			isRun = false;
		}
	}

	printMenu(PizzaMenu);

	return 0;
}