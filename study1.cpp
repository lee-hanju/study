#include <iostream>;
using namespace std;

class Home {
public:
	int horizontal;
	int vertical;
	int getarea();
};

int Home::getarea() {
	return horizontal * vertical;
}


int main() {
	Home rect;
	
	cout << "Hello what's your name?";
	char name[100];
	cin.getline(name, 100, '\n');
	
	
	cout << "Where are you from?";
	char country[100];
	cin.getline(country, 100, '\n');
	
	cout << "How old are you?";
	int age;
	cin >> age;
	

	cout << "Where do you live in?";
	char area[100];
	cin.getline(area, 100, '\n');
	

	cout << "How many meters across your house";
	int horizontal;
	cin >> horizontal;
	rect.horizontal = horizontal;

	cout << "How many meters are your house";
	int vertical;
	cin >> vertical;
	rect.vertical = vertical;
	
	cout << name;
	cout << country;
	cout << age;
	cout << area;
	cout << horizontal;
	cout << vertical;
	cout << "Your house area is " << rect.getarea() << "square meters.";
}