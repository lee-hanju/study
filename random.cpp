#include<ctime>
#include<cstdlib>
using namespace std;

class Random {
	int r, n;
public:
	Random();
	int next();
	int nextInRange(int x,int y);
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int x = rand();
	return x;
}

int Random::nextInRange(int x, int y) {
	return rand() % (y - x + 1) + x;
}

int main() {
	Random r;
	cout << " --0���� " << RAND_MAX << "������ ���� ���� 10 �� -- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << " -- 2���� " << "4 ������ ���� ���� 10�� -- " << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}