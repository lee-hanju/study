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
	cout << "정수형 숫자 2개를 입력하세요 >>"<< endl;
	int num, num1, big;
	cin >> num >> num1;
	if (bigger(num, num1, big)) {
		cout << "num과 num1이 같습니다" << endl;
	}
	else {
		cout << "num과 num1이 다릅니다. " <<" 더.큰.수" <<big <<endl;
	}
}