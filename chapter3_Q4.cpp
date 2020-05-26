#include<iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine();
	CoffeeMachine(int c, int w, int s);
	int drinkEspresso();
	void show();
	int drinkAmericano();
	int drinkSugarCoffee();
	int fill();
};

CoffeeMachine::CoffeeMachine() {
	coffee = 0; water = 0; sugar = 0;
}

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c; water = w; sugar = s;
}

int CoffeeMachine::drinkAmericano() {
	coffee--; water -= 2;
	return coffee, water;
}

int CoffeeMachine::drinkEspresso() {
	coffee--; water--;
	return coffee, water;
}

int CoffeeMachine::drinkSugarCoffee() {
	coffee--; water -= 2; sugar--;
	return coffee, water, sugar;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, " << "커피:" << coffee << " 물: " << water << " 설탕: " << sugar << endl;
}

int CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
	return coffee, water, sugar;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}