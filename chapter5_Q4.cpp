#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else if (a > b) {
		big = a;
		return false;
	}
	else if (a < b) {
		big = b;
		return false;
	}

}

int main() {
	cout << "������ ���� 2���� �Է��ϼ��� >>"<< endl;
	int num, num1, big;
	cin >> num >> num1;
	if (bigger(num, num1, big)) {
		cout << "num�� num1�� �����ϴ�" << endl;
	}
	else {
		cout << "num�� num1�� �ٸ��ϴ�. " <<" ��.ū.��" <<big <<endl;
	}
}