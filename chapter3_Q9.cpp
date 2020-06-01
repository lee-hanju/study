#include<iostream>
using namespace std;

class Oval {
private:
    int width, height;
public:
    Oval(); //�⺻ ������
    Oval(int width, int height); //������
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
    ~Oval();
};

Oval::Oval() {
    width = 1; height = 1;
}

Oval::Oval(int width, int height) {
    this->width = width;
    this->height = height;
    cout << width << endl;
}

int Oval::getWidth() {
    return width;
}
int Oval::getHeight() {
    return height;
}

void Oval::set(int w, int h) {
    this->width = w;
    this->height = h;
}
void Oval::show() {
    cout << "width = " << getWidth() << ", height =" << getHeight() << endl;
}

Oval :: ~Oval() {
    cout << "Oval �Ҹ�: WIDTH = " << width << ",HEIGHT = " << height << endl;
}

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << " , " << b.getHeight() << endl;
}
