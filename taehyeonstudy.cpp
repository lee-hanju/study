#include<iostream>
using namespace std;

class TV {
private:
	int channel;
	int volume;
	int num;
public:
	TV(int num);
	TV(int num, int channel);
	TV(int num, int channel, int volume);
	~TV();
	
	void volumeup(int v);
	void volumedown(int v);
	void channelchange();
};

TV::TV(int num) {
	this->num = num;
	this->channel = 1;
	this->volume = 100;

	cout << num << "번 TV의 전원이 켜졌습니다." << endl;
}

TV::TV(int num, int channel) {
	this->num = num;
	this->channel = channel;
	this->volume = 100;

	cout << num << "번 TV의 전원이 켜졌습니다." << endl;
}

TV::TV(int num, int channel, int volume) {
	this->num = num;
	this->channel = channel;
	this->volume = volume;

	cout << num << "번 TV의 전원이 켜졌습니다." << endl;
}

TV::~TV() {
	cout << num << "번 TV의 전원이 종료되었습니다." << endl;
}

void TV::volumeup(int v) {
	volume += v;
	cout << num << "번 TV의 Volume이 " << v << " 만큼 up 되었습니다." << endl;
}

void TV::volumedown(int v) {
	volume -= v;
	cout << num << "번 TV의 Volume이 " << v << " 만큼 dowm 되었습니다." << endl;
}

void TV::channelchange() {
	cout << num << "번 TV  채널>> " << channel << "Volume의 크기>> " << volume << "입니다.";
}


int main() {
	const int Max = 3;
	TV* t = new TV[Max]{ TV(3),TV(3,7),TV(3,5,30) };
	t[0].volumeup(0);
	t[0].volumedown(50);
	t[1].volumedown(75);
	t[1].volumeup(25);
	t[2].volumeup(100);
	t[2].volumedown(200);
	for (int i = 0; i < Max; i++) {
		t[i].channelchange();
	}
	delete[] t;
}